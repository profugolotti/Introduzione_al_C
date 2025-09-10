# I cicli in C

I **cicli** (o strutture di iterazione) sono costrutti di controllo del
flusso che permettono di eseguire ripetutamente un blocco di istruzioni,
fino al verificarsi di una condizione.

------------------------------------------------------------------------

## Tipologie di cicli

### 1. Ciclo `while`

-   La condizione viene verificata **prima** di ogni iterazione.
-   Se la condizione è falsa sin dall'inizio, il ciclo non viene
    eseguito neanche una volta.

**Esempio:**

``` c
#include <stdio.h>

int main() {
    int i = 0;

    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}
```

------------------------------------------------------------------------

### 2. Ciclo `do...while`

-   La condizione viene verificata **dopo** l'esecuzione del blocco.
-   Il ciclo viene eseguito almeno una volta, anche se la condizione è
    falsa.

**Esempio:**

``` c
#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}
```

------------------------------------------------------------------------

### 3. Ciclo `for`

-   Pensato per cicli con un **numero noto di iterazioni** (e per questo detto definito o enumerativo).
-   Ha tre parti: inizializzazione, condizione e aggiornamento.

**Esempio:**

``` c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}
```

------------------------------------------------------------------------

## Osservazioni generali

-   I cicli possono essere **annidati** (un ciclo dentro un altro).
    
    ## Esempi di cicli annidati: tabellina dei numeri da 1 a 5.

    ``` c
    #include <stdio.h>

    int main() {
        for (int i = 1; i <= 5; i++) {        // ciclo esterno: riga
            for (int j = 1; j <= 5; j++) {    // ciclo interno: colonna
                printf("%4d", i * j);         // prodotto riga * colonna
            }
            printf("\n"); // a capo dopo ogni riga
        }
        return 0;
    }
    ```
    ### Output previsto 
    ```
        1   2   3   4   5
        2   4   6   8  10
        3   6   9  12  15
        4   8  12  16  20
        5  10  15  20  25
    ```
-   Si può dimostrare che i tre tipi di cicli sono **equivalenti** in termini di funzionalità:
    ogni ciclo `for` può essere riscritto come un `while` e viceversa (Teorema di Böhm-Jacopini).
-   È possibile interrompere o saltare una iterazione usando:
    -   `break` → esce immediatamente dal ciclo
    -   `continue` → salta all'iterazione successiva

**Esempio con `continue` e `break`:**

``` c
#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 3) continue;   // salta il 3
        if (i == 7) break;      // interrompe il ciclo
        printf("i = %d\n", i);
    }
    return 0;
}
```
### Output previsto 
```
    0
    1
    2
    4
    5
    6
```
------------------------------------------------------------------------

## Esercizi sui cicli in C
Nel seguito per N si intende un numero inserito da tastiera.
1.  Stampare i numeri da 1 a N con un ciclo.
2.  Calcolare la somma dei primi N numeri naturali .
3.  Chiedere un numero positivo all'utente: se inserisce un numero
    negativo, ripetere la richiesta finchè nonoì risulta corretto (validazione dell'input).
4.  Stampare la tabellina del 7.
5.  Stampare solo i numeri pari da 1 a 20.
6.  Rifai l'esercizio 5 sfruttando il costrutto `continue`.
7.  Scrivi un programma che stampi i numeri da 1 a N. Perogni numero stampa se è pari/dispari 
    e se è multiplo di 3
8.  Chiedi all’utente di inserire 10 numeri interi e stampa la somma di quelli positivi e ela somma
    di quelli negativi.