# Vettori in C

## Cos'è un vettore?

Un **vettore** (array) è una struttura dati che consente di memorizzare
più valori dello **stesso tipo** all'interno di un'unica variabile.

* Tecnicamente permette definire una struttura dati di N elementi
**contigui in memoria** (uno di seguito all'altro) e **omogenei**(stesso tipo).

Esempio:

``` c
int v[5]; // dichiarazione di un vettore di 5 interi
```

```text
Rappressentazione di un vettore di 5 elementi contigui in memoria:

    +-----+-----+-----+-----+-----+
    |  10 |  20 |  30 |  40 |  50 |   <-- valori (dati contenuti)
    +-----+-----+-----+-----+-----+
       ^     ^     ^     ^     ^
       |     |     |     |     |
      v[0]  v[1]  v[2]  v[3]  v[4]   <-- indici (posizioni)

    - Gli elementi sono omogenei (tutti int, in questo caso).
    - Gli elementi sono contigui (uno dopo l'altro in memoria).
    - Ogni elemento ha:
        • un indice (da 0 a 4)
        • un valore (l'intero contenuto)
```

* Le 'celle' di un vettore sono dette  **elementi** (ognuno equivale ad una
variabile);
* ogni elemento ha un **valore** (il dato che contiene) ed un **indice** (la posizione rispetto alla testa del vettore).

* Gli **indici** partono sempre da **0** e arrivano a `dimensione - 1`.

* In C, i vettori hanno **dimensione fissa** che deve essere indicata al
momento della dichiarazione (array statici): possiamo quindi mettere un numero tra quadre,
oppure un identificativo che però deve essere una **costante** (definita con `const` o `#define`).

------------------------------------------------------------------------

## Dichiarazione e inizializzazione

Ecco alcuni esempi:

``` c
int v1[10];              // dichiarazione di un vettore di 10 interi (valori casuali in memoria)
int v2[] = {5,10,15,20,25}; // inizializzazione esplicita (dimensione dedotta automaticamente = 5)
int v3[10] = {0,1,2};    // i primi 3 elementi inizializzati, gli altri messi a 0 automaticamente
int v4[10] = {0};        // tutti gli elementi inizializzati a 0
int v5[];                // ⚠️Errore! la dimensione non può essere omessa se non si inizializza
```

> ⚠️ In C la dimensione deve essere **nota a compilazione** (non può essere una variabile).

Esempio:

```c

#define DIM 100
int size = 20; 
const int N = 10;
int a[DIM]; // corretto
int b[size]; // ⚠️Errore! size non è una costante
int c[N]; // corretto
```

------------------------------------------------------------------------

## Accesso agli elementi

Ogni elemento si accede con il suo **indice**:

``` c
v1[0] = 100;  // assegna 100 al primo elemento del vettore v1
printf("%d", v2[2]); // stampa il terzo elemento (indice 2)
```

> ⚠️ Attenzione: se provi ad accedere a un indice fuori dai limiti (es.
> `v1[15]`), il comportamento è **indefinito**!

------------------------------------------------------------------------

## Cicli e vettori

Spesso si usano i cicli per elaborare tutti gli elementi:

``` c
for(int i=0; i<10; i++){
    printf("%d\n", v2[i]); // stampa tutti gli elementi di v2
}
```

Esempi pratici: - Leggere valori da tastiera e inserirli in un vettore -
Creare un nuovo vettore come trasformazione di un altro

``` c
// leggo 10 numeri da tastiera e li salvo in v1
for(int i=0; i<10; i++){ 
    printf("Inserisci il %d valore: ", i+1);
    scanf("%d", &v1[i]);
}

// scrivo in v3 il doppio dei valori di v2, elemento per elemento
for(int i=0; i<10; i++){ 
    v3[i] = 2 * v2[i];
}
```

------------------------------------------------------------------------

## Stampa di un vettore

Un modo comodo per stampare un vettore in forma di "array":

``` c
printf("v2[] = ");
for(int i=0; i<5; i++){ 
    printf("[%d] ", v2[i]);
}
printf("\n");
```

Output esempio:

```text
    v2[] = [5] [10] [15] [20] [25]
```

------------------------------------------------------------------------

## Errori tipici con gli array

1. **Indice fuori dai limiti**

    ``` c
    int v[5];
    v[5] = 10; // ERRORE: l’ultimo indice valido è 4
    ```

    → Accesso a memoria non valida, comportamento **indefinito**.

2. **Uso di una variabile come dimensione dell'array**

    ``` c
    int n;
    scanf("%d", &n);
    int v[n]; // ERRORE! la dimensione deve essere una costante definita a compilazione
    ```

    → In C "classico" la dimensione deve essere nota a **compile-time**
    (es. `#define DIM 10`). Per array con dimensione decisa a **run-time** si parla di array dinamici (in quanto la loro dimensione può cambiare durante l'esecuzione) e possono essere allocati usando funzioni di **allocazione dinamica** (`malloc`, `calloc`).

3. **Gestione errata dell'ultimo elemento nei cicli**

    ``` c
    #define DIM 5
    int v[DIM] = {1,2,3,4,5};

    for(int i=0; i<=DIM; i++){   // ERRORE: si accede a v[5] che non esiste
        printf("%d ", v[i]);
    }
    ```

    → Il ciclo corretto è:

    ``` c
    for(int i=0; i<DIM; i++){   // CORRETTO: da 0 a 4
        printf("%d ", v[i]);
    }
    ```

    L'errore sta nel confondere `<=` con `<`.

------------------------------------------------------------------------

## Esercizi sui vettori in C

Ecco una serie di esercizi di difficoltà crescente per esercitarsi con i
vettori (se non specificato diversamente, supponiamo `N=10`).

1. Dichiarare un vettore di 5 interi, leggere i valori da tastiera e
    stamparli.

2. Leggere 10 numeri da tastiera in un vettore e stampare la loro
    somma.

3. Calcolare la media dei valori contenuti in un vettore di 10
    elementi.

4. Trovare il valore massimo e minimo in un vettore di 10 numeri e
    stamparli.

5. Leggere 10 interi e stampare quanti sono pari.

6. Dato un vettore di 10 elementi, creare un altro vettore che contenga
    gli stessi elementi in ordine inverso.

7. Dato un vettore di interi di dimensione N, chiedere all'utente un
    numero e verificare se si trova nel vettore.

8. Dati due vettori di 10 elementi ciascuno, creare un terzo vettore
    contenente la somma elemento per elemento.

9. Dati due vettori di N interi, scrivere in un terzo vettore gli
    elementi dei due vettori in modo alternato.
    *Esempio:*
    `v1 = [1,2,3,4], v2 = [10,20,30,40]`
    `v3 = [1,10,2,20,3,30,4,40]`

10. Leggere da tastiera un vettore di 10 numeri ed un numero `n`;
    stampare il numero di occorrenze di `n` tra gli elementi del
    vettore.
    *Esempio:* se il vettore è `[1,2,3,2,4,2,5]` e `n=2`, il programma
    deve stampare `3`.
