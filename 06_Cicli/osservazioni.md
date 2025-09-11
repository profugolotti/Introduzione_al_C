# Osservazioni generali

- I cicli possono essere **annidati** (un ciclo dentro un altro).

**Esempio di tabellina con cicli annidati:**
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
```
    1   2   3   4   5
    2   4   6   8  10
    3   6   9  12  15
    4   8  12  16  20
    5  10  15  20  25
```

- I tre tipi di cicli sono **equivalenti** in termini di funzionalità (Teorema di Böhm-Jacopini).
- È possibile interrompere o saltare una iterazione usando `break` e `continue`.

**Esempio:**
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
```
0
1
2
4
5
6
```

---

[← Ciclo for](for.md) | [Vai a Esercizi →](esercizi.md)
