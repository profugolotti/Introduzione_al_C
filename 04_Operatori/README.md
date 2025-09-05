# Operatori in C

Gli operatori in C servono per eseguire calcoli, confronti, combinazioni
logiche e assegnazioni.\
Ecco una sintesi delle principali categorie con esempi.

------------------------------------------------------------------------

## 🔹 Operatori aritmetici

Permettono di fare operazioni matematiche di base.

-   `+` somma\
-   `-` sottrazione\
-   `*` moltiplicazione\
-   `/` divisione intera\
-   `%` resto della divisione

**Esempio:**

``` c
int a = 7, b = 3;
printf("a + b = %d\n", a + b);   // 10
printf("a / b = %d\n", a / b);   // 2 (divisione intera)
printf("a %% b = %d\n", a % b);  // 1 (resto)
```

------------------------------------------------------------------------

## 🔹 Operatori di confronto (relazionali)

Confrontano due valori e restituiscono `0` (falso) o `1` (vero).
Servono quindi per definire **condizioni** che assieme i costrutti di controllo del flusso permettono di creare programmi interattivi complessi.

-   `==` uguale\
-   `!=` diverso\
-   `>` maggiore\
-   `<` minore\
-   `>=` maggiore o uguale\
-   `<=` minore o uguale

**Esempio:**

``` c
int a = 7, b = 3;
printf("a > b  -> %d\n", a > b);   // 1 (vero)
printf("a == b -> %d\n", a == b); // 0 (falso)
```

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
👉 Come si nota per stampare l'esito di una condizione si usa `%d`: questo è in virtù
del fatto che, in C, non esiste un tipo di dato apposta per i booleani, ma si ricorre agli interi.

------------------------------------------------------------------------

## 🔹 Operatori di assegnazione e combinati

Permettono di aggiornare il valore di una variabile.

-   `=` assegna
-   `+=` somma e assegna
-   `-=` sottrae e assegna
-   `*=` moltiplica e assegna
-   `/=` divide e assegna

**Esempio:**

``` c
int c = 5;
c += 3;  // equivale a c = c + 3  -> 8
c *= 2;  // equivale a c = c * 2  -> 16
```

---------------------------------------------------------------

## Errori tipici con gli operatori in C

### 1. Confusione tra n + 1 e n += 1
``` c
int n = 5;
n + 1;         // ❌ NON modifica n
printf("%d\n", n);  // stampa ancora 5
```

👉 n + 1 è solo un’espressione che calcola 6 (dentro la CPU), ma non lo assegna a n e non viene memorizzata, quindi è persa.

✅ Corretto:
``` c
n = n + 1;   // oppure n += 1;
```

### 2. n++ vs ++n (post-incremento e pre-incremento)
``` c
int n = 5;
printf("%d\n", n++); // stampa 5, poi n diventa 6
printf("%d\n", ++n); // incrementa subito n a 7 e poi stampa 7
```

👉 Molti studenti si aspettano che n++ stampi già il valore incrementato.

### 3. Usare n =+ 1 invece di n += 1
``` c
int n = 5;
n =+ 1;   // ❌ in realtà assegna +1, quindi n diventa 1

``` 

👉 L’ordine è diverso: =+ non è +=.