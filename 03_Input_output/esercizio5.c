#include <stdio.h> //printf, scanf
int main() {

    char nome [10];
    int numeri ;   

    // Richiedo il nome
    printf("\nInserire il proprio nome: ") ;
    //Leggere il nome da tastiera
    scanf("%s", nome);

    //Richiedi le battute in 10 secondi
    printf("\nInserire le battute in 10 secondi: ");
    // leggere le battute da tastiera
    scanf("%d", &numeri);

    //Stampoil saluto
    printf("Ciao %s ", nome );

    //calcolo il numero di battute per secondo
    float battute_per_secondo = numeri/10; //...per il compilatore '/' è la divisione tra interi
    
    float battute_per_secondo_corretto = ((float)numeri) / 10; //...forzo la conversione in float 
    //...visto che il dividendo è ora float'/' la divisione è quella in virgola mobile
    
    //Stampo il numero di battute al secondo
    printf("Il tuo numero di battute per secondo: %.2f", battute_per_secondo_corretto);
    
    return 0;
}
