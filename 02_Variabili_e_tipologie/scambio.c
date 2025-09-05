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
temp = a;
a = b; //  a <- b       
b = temp;  // b <- temp

/*
                a	b	temp
                --------------
                5	3	?
            r21 5   3	5
            r22 3   3   5
            r23 3   5   5
*/

    //Stampo le variabili dopo lo scambio
    printf("le variabili dopo lo scambio: a=%d, b=%d\n", a, b);  //7 e 3


    return 0;
}