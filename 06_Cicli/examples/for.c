/*
    Programma che stampa la somma dei numeri da 1 a N.

*/

#include <stdio.h> //printf, scanf

int main(){
    
    int N;
    int somma;
    int i;
    /*
    somma = somma + 1
    somma = somma + 2
    somma = somma + 3
    somma = somma + 4
    ...    
    */

    printf("Inserire un numero intero positivo N: ");
    scanf("%d", &N);

    for( i=1, somma=0; i<=N ; i+=1){
       somma += i;
    //printf("La somma dei numeri da 1 a %d e': %d\n", N, somma);
    }

    /* Trace Table
            N  i   somma
    #24     5  1     0
    #25     5  1     1
    #24     5  2     1
    #25     5  2     3 
    #24     5  3     3
    #25     5  3     6
    #24     5  4     6
    #25     5  4    10
    #24     5  5    10
    #25     5  5    15
    #24     5  6    15
    
    #finisce il ciclo
    */

    printf("La somma dei numeri da 1 a %d e': %d\n", N, somma);

    return 0;
}