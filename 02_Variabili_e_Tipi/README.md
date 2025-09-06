
# Variabili in C

## Struttura di base di un programma C
```c
#include <stdio.h>   // Libreria standard per input/output

int main() {
    // Dichiarazione variabili
    int n = 100;       // intero (4 byte)
    char c = 'A';      // carattere (1 byte)
    float peso = 72.5; // numero in virgola mobile (4 byte)
    double pi = 3.141592653589793; // double precision (8 byte)

    char* msg = "Ciao Mondo"; // puntatore a stringa: 
    // !!! attento NON è un char (una stringa di più caratteri non può essere contenuta in 1 byte)

    // Uso delle variabili
    printf("n = %d, c = %c, peso = %.2f, pi = %.15f\n", n, c, peso, pi);
    printf("Messaggio: %s\n", msg);

    return 0; // 0 -> tutto ok
}
```

---

## Tipi di base e dimensioni tipiche (su macchine a 32/64 bit)
| Tipo         | Dimensione | Range approssimativo |
|--------------|------------|-----------------------|
| `char`       | 1 byte     | -128 … +127 *(signed)* / 0 … 255 *(unsigned)* |
| `int`        | 4 byte     | -2.147.483.648 … +2.147.483.647 |
| `long long`  | 8 byte     | -9.22e18 … +9.22e18 |
| `float`      | 4 byte     | ~6-7 cifre decimali  |
| `double`     | 8 byte     | ~15-16 cifre decimali |

---

## Concetti chiave
- **Dichiarazione** → informare il compilatore del tipo e del nome della variabile.  
  ```c
  int n;
  char c;
  ```
- **Inizializzazione** → assegnare un valore alla variabile al momento della dichiarazione.  
  ```c
  int n = 100;
  char c = 'A';
  ```
- **Puntatori a stringa** → un `char*` può puntare a un array di caratteri terminato da `'\0'`.  
  ```c
  char* msg = "Ciao Mondo";
  ```
  Attento!!!
    - Un char è un singolo carattere, ad esempio 'A'.
    - Quindi una stringa come "Ciao Mondo" non può essere contenuta in una variabile di tipo `char`: puoi pensare ad una stringa come ad un trenino di lettere (detto array), dove ogni lettera è un vagone.

    Esempio:

    ```
    'C' | 'i' | 'a' | 'o' | ' ' | 'M' | 'o' | 'n' | 'd' | 'o' | '\0'
     ↑
    msg
    ```

    - Ogni casella rappresenta un **char** (1 byte).
    - `msg` è un puntatore (una variabile che occupa 4 o 8 byte, a seconda della macchina) che contiene l’indirizzo di memoria del primo carattere ('C').
    - Quando scrivi `printf("%s", msg);`, la funzione `printf` segue quell’indirizzo e legge caratteri finché non incontra '\0' (terminatore di stringa).
---

## Funzioni utili
- `sizeof(tipo)` → restituisce la dimensione in byte.  
- Librerie:  
  - `<limits.h>` → costanti min/max per interi (`INT_MIN`, `CHAR_MAX`, ecc.)  
  - `<float.h>` → costanti per `float` e `double` (`FLT_MAX`, `DBL_MIN`, ecc.)  

---

## Esercizi consigliati
1. Dichiara una variabile `int` senza assegnarla e stampala con `printf`, lancia il programma più volte: cosa stampa?
2. Crea una variabile `short`, inizializzala e stampala, cerca nella libreria limits.h e stampa il suo range (puoi sfruttare il manuale [qui](https://cplusplus.com/reference/climits/) per trovare le funazioni che ti servono).
3. Dichiarare una variabile `char` e usala per stampare qulache riga del codice ASCII, stampando sia il carattere che il suo codice ASCII.
4. Dichiarare sia una variabile `double` sia una `float` e inizializzale con il valore di π con molte cifre decimali ([qui](https://www.dmf.unicatt.it/musesti/divulg/itis2007/pi.html)), stampale entrambe con l'opportuna specifica di conversione e confrontale.
5. Usare `sizeof()` per stampare una tabella con le dimensioni dei tipi studiati ( `int`, `float`, `double`, `char`, ecc).

---
