#include <stdio.h> //printf, scanf


int main() {
    int eta;
    float altezza;    // in metri
    char nome[30];    // stringa (max 29 caratteri + '\0')

    const int ANNO_CORRENTE = 2025;   // costante simbolica
    const float ALTEZZA_MEDIA = 1.70; // valore di riferimento
                
    //Il modificatore "const" avvisa il compilatore che la 'variabile' non può essere modificata

    // Input da tastiera
    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    printf("Inserisci la tua eta': ");
    scanf("%d", &eta);

    printf("Inserisci la tua altezza in metri (es. 1.75): ");
    scanf("%f", &altezza);

    // Output base
    printf("\nCiao %s!\n", nome);
    printf("Hai %d anni e sei alto %.2f m.\n", eta, altezza);

    // Operazioni con l'età
    int anno_nascita = ANNO_CORRENTE - eta;
    printf("\n== Calcoli con l'età ==\n");
    printf("Se oggi siamo nel %d, sei nato circa nel %d.\n", ANNO_CORRENTE, anno_nascita);

    // Operazioni con l'altezza
    float altezza_cm = altezza * 100;          // conversione in cm
    float diff_media = altezza - ALTEZZA_MEDIA; // differenza da altezza media
    float rapporto_media = altezza / ALTEZZA_MEDIA;

    printf("\n== Calcoli con l'altezza ==\n");
    printf("La tua altezza in centimetri: %.0f cm.\n", altezza_cm);
    printf("Differenza rispetto all'altezza media (%.2f m): %.2f m.\n", ALTEZZA_MEDIA, diff_media);
    printf("Rapporto rispetto alla media: %.2f\n", rapporto_media);

    return 0;
}
