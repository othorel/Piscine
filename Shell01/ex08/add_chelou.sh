#!/bin/bash

# Les bases
BASE1='\"?!'      # Base pour FT_NBR1
BASE2='mrdoc'     # Base pour FT_NBR2
BASE3='gtaio luSnemf' # Base pour le résultat

# Fonction pour convertir un nombre d'une base à un entier
convert_to_decimal() {
    local num="$1"
    local base="$2"
    local decimal=0
    local length=${#num}
    
    for (( i=0; i<length; i++ )); do
        local char="${num:i:1}"
        local value=$(expr index "$base" "$char")
        if [ $value -eq 0 ]; then
            echo "Invalid character $char in number $num" >&2
            return 1
        fi
        # Les index sont 1-based, donc on fait -1
        decimal=$((decimal * ${#base} + value - 1))
    done
    
    echo "$decimal"
}

# Fonction pour convertir un entier en une base spécifique
convert_from_decimal() {
    local num="$1"
    local base="$2"
    local result=""
    
    if [ "$num" -eq 0 ]; then
        echo "${base:0:1}"
        return
    fi

    while [ "$num" -gt 0 ]; do
        local remainder=$((num % ${#base}))
        result="${base:remainder:1}$result"
        num=$((num / ${#base}))
    done
    
    echo "$result"
}

# Lire les nombres à partir des variables
FT_NBR1='\"?"\"'
FT_NBR2='rcrdmddd'

# Convertir les nombres en décimal
dec_nbr1=$(convert_to_decimal "$FT_NBR1" "$BASE1")
dec_nbr2=$(convert_to_decimal "$FT_NBR2" "$BASE2")

# Vérifier si la conversion a réussi
if [ $? -ne 0 ]; then
    exit 1
fi

# Additionner les deux nombres
sum=$((dec_nbr1 + dec_nbr2))

# Convertir la somme dans la base de résultat
result=$(convert_from_decimal "$sum" "$BASE3")

# Afficher le résultat
echo "La somme est :"
echo "$result"

