/*
Esempio di scambio di valori tra due variabili

*/


#include <stdio.h>

int main() {

    int a = 3;
    int b = 7;
    int temp; //variabile di appoggio per lo scambio


    //leggi le variabili da tastiera

    //Stampo le variabili prima dello scambio
    printf("le variabili prima dello scambio: a=%d, b=%d\n", a, b);  //3 e 7

    // scambio dei valori

/* scambio errato senza variabile d'appoggio
    a = b;  // a <- b
    b = a;  // b <- a (ma a è già stato sovrascritto!)

            a   b
            --------
            5   3   // valori iniziali
    r24     3   3   //  a <- b  ...il valore di b (3) sovrascrive il 5
    r25     3   3   //  b <- a  ...non cabia nulla, b rimane 3 perchè ormai il 5 è perso
*/

// scambio correto con variabile d'appoggio
    temp = a;
    a = b; //  a <- b       
    b = temp;  // b <- temp

/*
                a	b	temp
                --------------
                5	3	?       // valori iniziali
            r35 5   3	5   // temp <- a salvo il 5 in temp
            r36 3   3   5   // a <- b  ...ora a può essere sovrascritto perchè il 5 è al sicuro in temp
            r37 3   5   5   // b <- temp ...ora b può essere sovrascritto con il valore originale di a che è in temp
*/

    //Stampo le variabili dopo lo scambio
    printf("le variabili dopo lo scambio: a=%d, b=%d\n", a, b);  //7 e 3


    return 0;
}