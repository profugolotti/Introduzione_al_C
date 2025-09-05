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

## 🔹 Selezione (`if`, `else`)

Le **istruzioni di selezione** usano le condizioni per decidere cosa
eseguire.

### Selezione semplice (if)

Si usa quando il verificarsi della condizione
porta all'esecuzione di una o più istruzioni, ma
poi viene ripreso il flusso principale

``` c
if (condizione) {
    // eseguito se condizione è vera
}
```


### Selezione doppia (if - else)

quando il flusso prevede due percorsi logicamente distinti: 
- un blocco di codice viene eseguito al verificarsi della condizione
- in tutti gli altri casi viene eseguito il secondo blocco di istruzioni

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

### Selezione multipla (if - else if - else)

Quando il flusso prevede più percorsi alternativi, si usa la selezione multipla:
- Ogni blocco if viene eseguito solo se la sua condizione è vera.
- Se nessuna condizione è soddisfatta, può essere eseguito un blocco finale else (racchiude tutti i casi non previsti dalle condizioni precedenti).
- Permette gestire più possibilità logicamente distinte senza annidare troppi if.


**Esempio:**

``` c
int voto = 7;

if (voto < 6) {
    printf("Insufficiente\n");
} else if (voto < 8) {
    printf("Discreto\n");
} else if (voto < 10) {
    printf("Buono\n");
} else {
    printf("Eccellente\n");
}
```

------------------------------------------------------------------------
## Errori tipici

### 3. Uso errato di = al posto di ==
``` c
int n = 5;
if (n = 3) {   // ❌ assegna 3 a n, non confronta
    printf("Condizione vera\n"); // verrà sempre eseguito (perché 3 è vero)
}
```

✅ Corretto:
``` c
if (n == 3) {
    printf("n è uguale a 3\n");
}
```

### 4. Dimenticare le parentesi con condizioni complesse
``` c
int a = 5, b = 10;
if (a < 10 && b > 2 || a == 5) { ... }
```

👉 Gli operatori logici hanno priorità diverse (&& ha precedenza su ||).
Lo studente potrebbe credere che venga valutato in ordine da sinistra a destra.

✅ Corretto:
``` c
if ((a < 10 && b > 2) || (a == 5)) { ... }
```
...le parentesi rendono esplicito l'ordine in cui vogliamo che vengano valutati gli operatori

---------------------------------------------------------------------- 


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

**Esempi di esecuzione**

```markdown
Inserisci un numero: 14
14 è multiplo di 2
14 è multiplo di 7

Inserisci un numero: 25
25 è multiplo di 5

Inserisci un numero: 11
11 non è multiplo di nessuno tra 2 e 7
```

### 🔹 4. Operatore logico `&&`
Scrivi un programma che chieda l'età e se lo studente ha la tessera
dello studente (`s`/`n`).
- Se ha meno di 26 anni **e** ha la tessera, stampare "Hai diritto allo
sconto".
- Altrimenti stampare "Nessuno sconto disponibile".

### 🔹 5. Operatore logico `||`
Scrivi un programma che chieda un voto (da 1 a 10).
- Se il voto è **minore di 6** oppure **maggiore di 9**, stampa "Caso
speciale".
- Altrimenti stampa "Voto normale".

### 🔹 6. Operatore logico `!`
Scrivi un programma che chieda all'utente se possiede un abbonamento
valido (`s`/`n`).\
- Se **non** ha l'abbonamento (`!`), stampa "Devi acquistare un
biglietto".\
- Altrimenti stampa "Puoi entrare".

### 🔹 7. Verifica dell'input
Scrivi un programma che chieda all'utente la lunghezza del lato di un cubo;
stampa a schermo superficie e volume solo se tale lunghezza è positiva.

### 🔹 8. Accesso a un sito riservato
Scrivi un programma che chieda all'utente:
- l'età
- se ha un abbonamento (`s`/`n`)

L'utente può accedere **solo se** ha almeno 18 anni **e** ha un
abbonamento valido.
Altrimenti stampa un messaggio di accesso negato.

### 🔹 9. Promozione speciale
Scrivi un programma che chieda all'utente il voto di un esame (da 1 a
10).
Stampare "Complimenti, caso speciale" se:
- il voto è **minore di 6** (bocciato) **oppure**
- il voto è **maggiore di 9** (eccellente).
Altrimenti stampare "Voto normale".

### 🔹 10. LunaPark
Scrivi un programma che calcoli il prezzo del biglietto per un visitatore del Luna Park, considerando età, tipo di attività scelta, ed eventuali sconti. Il prezzo di base è 10 euro per tutti.
- Sconti in base all’età (selezione multipla):
    * Età < 10: 50% di sconto
    * Età tra 10 e 17: 30% di sconto
    * Età >= 65: 40% di sconto
    * Tutti gli altri: nessuno sconto
- Attività speciale: Ogni visitatore sceglie un’attività:
    * Giostra
    * Casa stregata
    * Torre panoramica
    Nel messaggio finale oltre al prezzo aggiungi anche il nome dell’attività scelta.

**Esempio di esecuzione:**


```markdown
	Quanti anni hai? 7
	Scegli un'attività (g=giostra, c = casa stregata, t=torre panoramica): g
	Hai diritto a uno sconto del 50%.
	Il tuo biglietto comprensivo del giro **giostra** costa: 7.00 euro
```