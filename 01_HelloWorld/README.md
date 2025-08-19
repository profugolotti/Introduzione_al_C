# Primo programma in C

In questo file, esploreremo come scrivere il nostro primo programma in C. La funzione principale di un programma C è `main`, che è il punto d'ingresso per l'esecuzione del programma. 

La sintassi di base per un programma C è la seguente:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Spiegazione della funzione `main`
La funzione `main` è il cuore di ogni programma C. Quando eseguiamo un programma, il sistema operativo cerca la funzione `main` per iniziare l'esecuzione. 

### La stampa su schermo
Per stampare del testo sullo schermo, utilizziamo la funzione `printf`, che è fornita dalla libreria standard `stdio.h`. In questo esempio, `printf` stampa "Hello, World!" seguito da un ritorno a capo.