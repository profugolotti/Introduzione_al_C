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

Combinano condizioni booleane.

-   `&&` AND logico (vero se entrambe le condizioni sono vere)\
-   `||` OR logico (vero se almeno una condizione è vera)\
-   `!` NOT logico (nega la condizione)

**Esempio:**

``` c
int a = 7, b = 3;
printf("(a > 5) && (b < 5) -> %d\n", (a > 5) && (b < 5)); // 1
printf("(a < 5) || (b < 5) -> %d\n", (a < 5) || (b < 5)); // 1
```

------------------------------------------------------------------------

## 🔹 Operatori di assegnazione (forma )

Permettono di aggiornare il valore di una variabile.

-   `=` assegna\
-   `+=` somma e assegna\
-   `-=` sottrae e assegna\
-   `*=` moltiplica e assegna\
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