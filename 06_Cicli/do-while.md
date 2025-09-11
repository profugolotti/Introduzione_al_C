# Ciclo `do...while`

- La condizione viene verificata **dopo** l'esecuzione del blocco.
- Viene eseguito **almeno una volta**.

**Esempio:**

```c
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
```

---

[← Ciclo while](while.md) | [Vai a Ciclo for →](for.md)
