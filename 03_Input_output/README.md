# 04_Input_output
# Input e Output in C

## Struttura di base con `scanf` e `printf`
```c
#include <stdio.h>

int main ()
{
  char str [80];
  int i;
  const unsigned NOW = 2025; 
  // "unsigned" significa che la variabile non può assumere valori negativi.
  // Rappresenta solo numeri interi >= 0 (0, 1, 2, ...).
  // Esempi: unsigned int, unsigned short, unsigned long


  printf ("Enter your family name: ");
  scanf ("%79s", str);  
  printf ("Enter your age: ");
  scanf ("%d", &i);
  printf ("Mr. %s , %d years old.\n", str, i);
  printf ("In 2050 you will be about %d years old.\n", (2050 - NOW) + i);

  //esempio di conversione implicita tra sistemi numerici
  printf ("Enter a hexadecimal number: ");
  scanf ("%x", &i);
  printf ("You have entered %#x (%d).\n", i, i);

  return 0;
}
```

---

## Concetti chiave
- **`printf`** → stampa in output un testo formattato.  
  Specificatori principali:  
  | Specificatore | Significato                        | Esempio        |
  |---------------|------------------------------------|----------------|
  | `%d`          | intero decimale (`int`)            | `42`           |
  | `%x`          | intero esadecimale                 | `2a`           |
  | `%#x`         | esadecimale con prefisso `0x`      | `0x2a`         |
  | `%f`          | numero reale in virgola mobile     | `3.14`         |
  | `%.2f`        | float con 2 cifre decimali         | `3.14`         |
  | `%s`          | stringa (array di caratteri)       | `"ciao"`       |
  | `%c`          | carattere singolo (`char`)         | `'A'`          |

- **`scanf`** → legge dati da tastiera.  
  - Richiede l’indirizzo della variabile (`&`), tranne che per le stringhe (`char[]`).  
  - È possibile limitare il numero di caratteri letti con `%Ns` (nell’esempio `%79s`).  

- **Modificatori** → è possibile cambiare il modo in cui funzionano le variabili

  - **Costanti** → si dichiarano con `const`, e non possono essere modificate (*immutabili*) dopo l'inizializzazione.  
    ```c
    const unsigned NOW = 2025;
    ```
    - Attenzione! Le costanti devono sempre essere inizializzate.
- **`unsigned`** → le variabili intere (`int`, `short`, `long` e `long long`) possono memorizzare solo numeri non negativi (≥ 0)
  ```c
  const unsigned NOW = 2025;
  ```
  - raddoppia approssimativamente il massimo valore positivo memorizzabile rispetto al tipo con segno. 
  - Esempi di intervalli su macchine a 32/64 bit:
    ```markdown
    int (signed 32-bit):
    Min: -2.147.483.648                   0                   Max: 2.147.483.647
    |------------------------------------|----------------------------------|

    unsigned int (32-bit):
    Min: 0                                                            Max: 4.294.967.295
    |-----------------------------------------------------------------------|
    ```
---

## Esercizi consigliati
1. Scrivi un programma che chieda nome e età, e stampi:  
   *"Ciao <nome>, l’anno prossimo avrai <età+1> anni."*  

2. Estendi il programma per leggere e stampare il peso in **kg** e la sua conversione in **grammi**.  

3. Modifica il programma per chiedere all’utente l’anno di nascita e calcolare l’età (usando una costante per l’anno corrente).  

4. Fai leggere un carattere all’utente (`char sesso = 'M'/'F'`) e stampalo in una frase, ad esempio:  
   *"Hai selezionato il sesso: M."*  

5. Scrivi un programma che chieda altezza e peso e calcoli l’**indice di massa corporea (BMI)**, stampando anche un commento sul risultato (es. sotto peso, normopeso, sovrappeso).  
