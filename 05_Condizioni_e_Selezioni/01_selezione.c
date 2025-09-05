#include <stdio.h> //printf, scanf

int main() {
    int eta;
    char patente;

    printf("Inserisci la tua eta': ");
    scanf("%d", &eta);

    printf("Hai la patente? (s/n): ");
    scanf(" %c", &patente);

    // Primo esempio: Selezione doppia
    if (eta >= 18) {
        printf("Sei maggiorenne.\n");
    } else {
        printf("Sei minorenne.\n");
    }


    // Secondo esempio: Selezione semplice e operatore NOT (!)
    if (!(patente == 's')) { //espressione booleana, ovvero che può risultare solo V/F
        printf("Non hai ancora la patente.\n");
    }

    if(0){ //Il C non ha tipi booleani, quindi considera 0 come FALSO 
        printf("Questo non verrà mai stampato.\n");
    }

    if(6){ // e qualsiasi altro valore come VERO
        printf("Questo verrà sempre stampato.\n");
    }




    // Secondo esempio: uso dell'operatore logico AND (&&)
    if (eta >= 18 && patente == 's') {
        printf("Puoi guidare un'auto.\n");
    } else {
        printf("Non puoi guidare un'auto.\n");
    }

    // Terzo esempio: uso dell'operatore logico OR (||)
    if (eta < 18 || patente == 'n') {
        printf("Devi aspettare o prendere la patente.\n");
    } else {
        printf("Hai i requisiti per guidare.\n");
    }

    

    return 0;
}
