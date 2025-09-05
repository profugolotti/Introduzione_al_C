# 05 Condizioni e le Selezioni

# Condizioni e Operatori Logici in C

Questo documento riassume l'uso delle **condizioni** (espressioni
booleane), degli **operatori logici** e delle istruzioni di
**selezione** (`if`, `if...else`) in C.

------------------------------------------------------------------------

## 🔹 Condizioni (espressioni booleane)

Una **condizione** è un'espressione che può assumere solo due valori:
**vero (true)** o **falso (false)**.\
In C, `true` corrisponde a un valore diverso da 0, mentre `false`
corrisponde a 0.

### Esempi di condizioni

``` c
x > 5      // vero se x è maggiore di 5
x == 10    // vero se x è uguale a 10
x != 0     // vero se x è diverso da 0
```

### Programma dimostrativo

``` c
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    printf("x = %d, y = %d\n\n", x, y);

    // Condizioni semplici
    printf("x > y  --> %d\n", x > y);
    printf("x < y  --> %d\n", x < y);
    printf("x == 5 --> %d\n", x == 5);
    printf("y != 10 --> %d\n", y != 10);

    return 0;
}
```

Output atteso:

    x = 5, y = 10

    x > y  --> 0
    x < y  --> 1
    x == 5 --> 1
    y != 10 --> 0

------------------------------------------------------------------------

## 🔹 Operatori logici

Gli operatori logici permettono di combinare condizioni.

-   `&&` → AND logico (vero se **entrambe** le condizioni sono vere)
-   `||` → OR logico (vero se **almeno una** condizione è vera)
-   `!` → NOT logico (nega il risultato della condizione)

### Esempi

``` c
(x < y) && (x == 5)   // vero se entrambe le condizioni sono vere
(x > y) || (y == 10)  // vero se almeno una delle due è vera
!(x == 5)             // vero se x non è uguale a 5
```

### Programma dimostrativo

``` c
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    printf("(x < y) && (x == 5)  --> %d\n", (x < y) && (x == 5));
    printf("(x > y) || (y == 10) --> %d\n", (x > y) || (y == 10));
    printf("!(x == 5)            --> %d\n", !(x == 5));

    return 0;
}
```

------------------------------------------------------------------------

## 🔹 Selezione (`if`, `else`)

Le **istruzioni di selezione** usano le condizioni per decidere cosa
eseguire.

### Condizione semplice

``` c
if (condizione) {
    // eseguito se condizione è vera
}
```

### Condizione doppia

``` c
if (condizione) {
    // se vera
} else {
    // se falsa
}
```

**Esempio:**

``` c
if (eta >= 18) {
    printf("Sei maggiorenne.\n");
} else {
    printf("Sei minorenne.\n");
}
```

------------------------------------------------------------------------

## Esercizi su condizioni e operatori logici in C


### 🔹 1. Condizioni semplici
Scrivi un programma che chieda un numero all'utente e:
- stampi "pari" se il numero è divisibile per 2,
- altrimenti stampi "dispari".

### 🔹 2. Condizione doppia
Scrivi un programma che chieda la temperatura esterna (intero).
- Se è maggiore o uguale a 30 stampa "Fa caldo".
- Altrimenti stampa "Non fa caldo".

### 🔹 3.  Verifica di molteplicità
Scrivi un programma che legga un numero intero e dica se è multiplo di 2, 3, 4, 5, 6 o 7.

Esempi di esecuzione
``` c
Inserisci un numero: 14
14 è multiplo di 2
14 è multiplo di 7

Inserisci un numero: 25
25 è multiplo di 5

Inserisci un numero: 11
11 non è multiplo di nessuno tra 2 e 7
```

### 🔹 3. Operatore logico `&&`
Scrivi un programma che chieda l'età e se lo studente ha la tessera
dello studente (`s`/`n`).
- Se ha meno di 26 anni **e** ha la tessera, stampare "Hai diritto allo
sconto".
- Altrimenti stampare "Nessuno sconto disponibile".

### 🔹 4. UOperatore logico `||`
Scrivi un programma che chieda un voto (da 1 a 10).
- Se il voto è **minore di 6** oppure **maggiore di 9**, stampa "Caso
speciale".
- Altrimenti stampa "Voto normale".

### 🔹 5. Uso dell'operatore logico `!`
Scrivi un programma che chieda all'utente se possiede un abbonamento
valido (`s`/`n`).\
- Se **non** ha l'abbonamento (`!`), stampa "Devi acquistare un
biglietto".\
- Altrimenti stampa "Puoi entrare".

### 🔹 6. Accesso a un sito riservato
Scrivi un programma che chieda all'utente:
- l'età\
- se ha un abbonamento (`s`/`n`)

L'utente può accedere **solo se** ha almeno 18 anni **e** ha un
abbonamento valido.
Altrimenti stampa un messaggio di accesso negato.

### 🔹 7. Promozione speciale
Scrivi un programma che chieda all'utente il voto di un esame (da 1 a
10).
Stampare "Complimenti, caso speciale" se:
- il voto è **minore di 6** (bocciato) **oppure**
- il voto è **maggiore di 9** (eccellente).
Altrimenti stampare "Voto normale".
