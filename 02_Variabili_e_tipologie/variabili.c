#include <stdio.h>   // Libreria Standard Input/Output: printf, scanf
#include <limits.h>  // Per i range (CHAR_MIN, INT_MAX, ecc.)
#include <float.h>   // Per i limiti di float e double

int main() {
    // Sezione Dichiarativa
    char c = 'A';               // 1 byte, carattere ASCII (65)
    int n  = 100;               // 4 byte, intero con segno
    float peso = 72.5;          // 4 byte, virgola mobile (circa 6-7 cifre decimali di precisione)
    float pi_greco = 3.14f;     // la f indica che è un float
    double pi_greco_bello = 3.141592653589793; // 8 byte, doppia precisione (15-16 cifre)
    
    char* msg = "Ciao Mondo";   // Puntatore a stringa (array di char terminato da '\0')

    // Sezione del codice/Algoritmo
    printf("Carattere c = %c (codice ASCII: %d)\n", c, c);
    printf("Numero intero n = %d\n", n);
    printf("Peso = %.2f\n", peso);
    printf("Pi greco (float) = %.2f\n", pi_greco);
    printf("Pi greco (double) = %.15f\n", pi_greco_bello);
    printf("Messaggio = %s\n\n", msg);

    // Informazioni sui range e dimensioni
    printf("Dimensione di char: %zu byte, range [%d ; %d]\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Dimensione di int: %zu byte, range [%d ; %d]\n", sizeof(int), INT_MIN, INT_MAX);
    printf("Dimensione di long long: %zu byte, range [%lld ; %lld]\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("Dimensione di float: %zu byte, range [%e ; %e]\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("Dimensione di double: %zu byte, range [%e ; %e]\n", sizeof(double), DBL_MIN, DBL_MAX);

    return 0; // 0 -> tutto ok
}
