#!/bin/bash

VAR="testo dinamico"

echo guarda il mio $VAR

echo "$0" $0  "argomento 0 -> nome del programmma"
echo "$1" $1 "argomento 1 -> se esiste"
echo $# ecco quanti argomenti
#
echo $* "tutti gli argomenti"
echo $@ "altra maniera"
#
echo $? "eventuali errori"
echo $$ "PID"
echo $! "ultimo PId in background"

VAR="questa.sarebbe.una.stringa.di.esempio"
echo ${VAR}
echo ${VAR#stringa}
echo ${VAR%prova}

#echo le sueeee***********
 echo ${VAR#*.}        # --> sarebbe.una.stringa.di.esempio
 echo ${VAR##*.}     # --> esempio
 
 echo ${VAR%.*}       # --> questa.sarebbe.una.stringa.di
 echo ${VAR%%.*}    # --> questa
 echo "${VAR/st/ST}"   # --> queSTa.sarebbe.una.stringa.di.esempio
 echo ${VAR//st/ST}  # --> queSTa.sarebbe.una.STringa.di.esempio

#
echo "Buongiorno, come si chiama?"
read risposta
echo "Salve " $risposta ", come posso esssere utile?"

echo "esempio 2  ****"

#read -p 'Nome ' name
#read -sp 'Password ' psw

#echo ciao $name il tuo codice segreto è $psw


#let a=5+4
#echo $a
#let A=9+1
#echo $A


#read -p 'n1 ' n1
#read -p 'n2 ' n2

#a=3
#b=2

#ris=$(($n1+$n2))

#echo $(($n1+$n2))
#echo $ris
#echo $(($a+$b))

#echo "a è " 
#if [ $a -gt $b ]
#then
#    echo "maggiore"
#else
#    echo "minore"
#fi

#echo "rispetto a b"


#--             Crare il file
#--             Chmod +x prova.sh
#--             unset nomevariabile per cancellare
#--             
#--             $HOSTNAME il nome del computer host 
#--             $HOSTYPE il tipo di computer host 
#--             $OSTYPE il tipo di sistema operativo 
#--             $LOGNAME il nome di login dell'utente 
#--             $HOME la directory dell'utente 
#--             $PATH il percorso della directory corrente 
#--             $HELL la shell
#--             
#--             
#--             ! EXPRESSION	The EXPRESSION is false.
#--             -n STRING	The length of STRING is greater than zero.
#--             -z STRING	The lengh of STRING is zero (ie it is empty).
#--             STRING1 = STRING2	STRING1 is equal to STRING2
#--             STRING1 != STRING2	STRING1 is not equal to STRING2
#--             INTEGER1 -eq INTEGER22	INTEGER1 is numerically equal to INTEGER2
#--             INTEGER1 -gt INTEGER2	INTEGER1 is numerically greater than INTEGER2
#--             INTEGER1 -lt INTEGER2	INTEGER1 is numerically less than INTEGER2
#--             -d FILE	FILE exists and is a directory.
#--             -e FILE	FILE exists.
#--             -r FILE	FILE exists and the read permission is granted.
#--             -s FILE	FILE exists and it's size is greater than zero (ie. it is not empty).
#--             -w FILE	FILE exists and the write permission is granted.
#--             -x FILE	FILE exists and the execute permission is granted.
