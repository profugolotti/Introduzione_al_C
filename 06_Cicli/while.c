/*
Programma che richiede l'inserimento di un numero n e stampa il messaggio "Ciao!" n volte.  

*/

#include <stdio.h> //printf, scanf


int main(){

    //Dichiarazione variabili
    int n;
    //int i = 0;
    
    //Input dei dati
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    
    //output
    while (n>0){
        printf("Ciao!\n");
        n--;
    }

    return 0;
}