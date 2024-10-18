#!/bin/bash

FT_LINE1=7
FT_LINE2=15

cat /etc/passwd | \
    grep -v '^#' | \                         # Retirer les commentaires
    sed -n "${FT_LINE1},${FT_LINE2}p" | \   # Ne garder que les lignes entre FT_LINE1 et FT_LINE2
    awk 'NR % 2 == 0' | \                    # Ne garder qu'une ligne sur deux (en partant de la seconde)
    cut -d: -f1 | \                         # Extraire les logins (première colonne)
    awk '{print $1}' | \                    # Inverser chaque login
    sed 's/\(.*\)/\1/' | \
    awk '{ for(i=length;i>0;i--) printf "%s",substr($0,i,1); print ""}' | \
    sort -r | \                              # Trier par ordre alphabétique inversé
    tr '\n' ', ' | \                        # Remplacer les sauts de ligne par ", "
    sed 's/, $/./'                          # Remplacer la dernière virgule par un point


