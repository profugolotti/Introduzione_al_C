# Primo programma in C

In questo file, esploreremo come scrivere il nostro primo programma in C. La funzione principale di un programma C è `main`, che rappresenta il punto d'ingresso per l'esecuzione del programma. 

### Sintassi di base
Ecco un esempio di programma C minimo:

```c
#include <stdio.h>  // Include la libreria standard per input/output

int main() {
    printf("Hello, World!\n");  // Stampa un messaggio su schermo
    return 0;                    // Termina il programma
}
```

### Spiegazione riga per riga

- `int main() {` → **Entry point** del programma:  
  - `int` → il programma si impegna a ritornare un intero al sistema operativo (SO).  
  - `main()` → funzione riservata del C, deve esserci in ogni programma.  
  - `{` → la graffa identifica il punto di inizio dell’implementazione della funzione (dove cominciano le istruzioni del programma).  

- `// commenti` → ignorati dal compilatore, servono per prendere appunti o disabilitare parti di codice senza cancellarle.  

- `printf("Hello, World!\n");` → comando per visualizzare a schermo (output):  
  - `printf()` → funzione della libreria standard del C.  
  - `"Hello, World!\n"` → i doppi apici racchiudono il testo della stringa.  
  - `\n` → codice di controllo ASCII per andare a capo (non visualizzabile).  
  - `;` → indica la fine di un comando.  

- `return 0;` → **exit point** del programma: il programma restituisce la CPU al SO. Ritorna `0` per indicare che l’esecuzione è andata a buon fine.  

### La funzione `main`
La funzione `main` è il cuore di ogni programma C. Quando eseguiamo un programma, il sistema operativo cerca `main` per iniziare l'esecuzione.  

### La stampa su schermo
Per stampare del testo sullo schermo, utilizziamo la funzione `printf`, che fa parte della libreria standard `stdio.h`. In questo esempio, `printf` stampa "Hello, World!" seguito da un ritorno a capo (`\n`).  
