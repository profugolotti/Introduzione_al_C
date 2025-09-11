/*
Programma che richiede l'inserimento di un numero n e stampa il messaggio "Ciao!" n volte.  

*/

#include <stdio.h> //printf, scanf


int main(){

    //Dichiarazione variabili
    int n;
    //int i = 0; //contatore per il ciclo
    
    //Input dei dati
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    
    //output
    while (n>0){
        printf("Ciao!\n");
        n--;
    }

    /* versione con contatore: usa una variabile in più
    while (i < n){
        printf("Ciao!\n");
        i++;
    }   
       
    */

    return 0;
}