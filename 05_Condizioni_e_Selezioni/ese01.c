/*
Scrivi un programma che chieda un numero all'utente e:
- stampi "pari" se il numero è divisibile per 2,
- altrimenti stampi "dispari".
*/

#include <stdio.h> //printf, scanf

int main () {

    int numero;

    printf("inserire un numero: ") ;
    scanf("%d", &numero); // & quando non è una stringa 

    if (numero%2 == 0)  //Se il resto di numero/2 è 0 
    {
        printf("Il numero è pari\n");
    }
    else  //altrimenti
    { 
        printf("il numero è dispari\n");
    }

    return 0;
}

