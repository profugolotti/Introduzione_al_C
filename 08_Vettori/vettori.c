#include <stdio.h> //printf, scanf
#define DIM 10


int main(){

    

    /*
        Dichiarazione di un vettore di 10 interi
        Attento! gli indici vanno da 0 a 9
    */
    int v1[DIM]; //[?] [?] [?] [?] [?] [?] [?] [?] [?] [?]
                 // 0   1   2   3   4   5   6   7   8   9 

    //Puoi pensare ad un "treno" con 10 vagoni (elementi), ogni vagone è una variabile intera

    int v2[DIM] = {5,10,15,20,25,30,35,40,45, 50}; //inizializzazione esplicita

        /*
        v2[] =  [5] [10] [15] [20] [25] [30] [35] [40] [45] [50]
        indice-> 0    1    2    3    4    5    6    7    8    9
        
        */

    int v3[DIM] = {0,1,2}; //inizializzazione i primi 3 elementi, tutti gli altri sono 
                            //implicitamente messi a 0

    int v4[DIM] = {0}; //si può sfruttare il trucco per inizializzare tutti gli elementi a 0

    //Usiamo l'indice per riferirci ad un particolare elemento del vettore

    //Esempi:
    v1[0] = 100; //assegno 100 al primo elemento del vettore v1

    
    printf("%d\n", v2[2]); //stampa il terzo valore dell'array v2


    //Per agire su tutti gli elementi di un vettore si usa un ciclo
    for(int i=0; i<DIM; i++){ //stampo tutti i valori di v2
        printf("%d\n", v2[i]);
    }
    //leggo DIM numeri da tastiera  li salvo in v1
    for(int i=0; i<DIM; i++){ 
        printf("Inserisci il %d valore: ", i+1);
        scanf("%d", &v1[i]);
    }
    

    //in v3 scrivo il doppio di ogni elemento di v2
    for(int i=0; i<DIM; i++){ 
        v3[i] = 2 * v2[i];
    }

    //in v4 scrivo la differenza tra v2 e v1
    for(int i=0; i<DIM; i++){ 
        v4[i] = v2[i] - v1[i];
    }

    //stampo tutti e 4 i vettori formattati come array
    printf("v1[] = ");
    for(int i=0; i<DIM; i++){ 
        printf("[%d] ", v1[i]);
    }
    printf("\n");

    printf("v2[] = ");
    for(int i=0; i<DIM; i++){ 
        printf("[%d] ", v2[i]);
    }
    printf("\n");

    printf("v3[] = ");
    for(int i=0; i<DIM; i++){ 
        printf("[%d] ", v3[i]);
    }
    printf("\n");

    printf("v4[] = ");
    for(int i=0; i<DIM; i++){ 
        printf("[%d] ", v4[i]);
    }
    printf("\n");

    return 0;
}