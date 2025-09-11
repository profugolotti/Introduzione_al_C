# I cicli in C

I **cicli** (o strutture di iterazione) sono costrutti di controllo del
flusso che permettono di eseguire ripetutamente un blocco di istruzioni,
fino al verificarsi di una **condizione**.

---

Il linguaggio C offre tre tipi principali di cicli:

- [Ciclo Indefinito a Condizione Iniziale **`while`** ...](while.md)
- [Ciclo Indefinito a Condizione Finale **`do...while`** ...](do-while.md)
- [Ciclo Definito (Enumerativo) **`for`** ...](for.md)

## Osservazioni generali

- I tre tipi di cicli sono **equivalenti** in termini di funzionalità  
  (Teorema di Böhm-Jacopini).
  
- La scelta del tipo di ciclo dipende spesso dalla **leggibilità**  
  e dalla **chiarezza** del codice.
  
- I cicli possono essere **annidati** (un ciclo dentro un altro).
  
    <details>

    <summary><b>Esempio</b></summary>

    **Tabellina con cicli annidati:**

    ```c
    #include <stdio.h>

    int main() {
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                printf("%4d", i * j);
            }
            printf("\n");
        }
        return 0;
    }
    ```

    Output previsto:

    ```text
        1   2   3   4   5
        2   4   6   8  10
        3   6   9  12  15
        4   8  12  16  20
        5  10  15  20  25
    ```

</details>

- È possibile interrompere o saltare una iterazione usando `break` e `continue`.
  
    <details>

    <summary><b>Esempio</b></summary>

    ```c
    #include <stdio.h>

    int main() {
        for (int i = 0; i < 10; i++) {
            if (i == 3) continue; // salta il 3
            if (i == 7) break;    // interrompe il ciclo
            printf("i = %d\n", i);
        }
        return 0;
    }
    ```

    Output previsto:

    ```text
    0
    1
    2
    4
    5
    6
    ```

</details>

---

## Esercizi sui cicli in C

Nel seguito per N si intende un numero inserito da tastiera.

1. Stampare i numeri da 1 a N con un ciclo.
2. Calcolare la somma dei primi N numeri naturali.
3. Chiedere un numero positivo all'utente: se inserisce un numero negativo, ripetere la richiesta finché non risulta corretto (validazione input).
4. Stampare la tabellina del 7.
5. Stampare solo i numeri pari da 1 a 20.
6. Rifai l'esercizio 5 sfruttando il costrutto `continue`.
7. Scrivi un programma che stampi i numeri da 1 a N. Per ogni numero stampa se è pari/dispari e se è multiplo di 3.
8. Chiedi all’utente di inserire 10 numeri interi e stampa la somma di quelli positivi e la somma di quelli negativi.

---
