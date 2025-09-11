# Ciclo `while`

- La condizione viene verificata **prima** di ogni iterazione.
- Se la condizione è falsa sin dall'inizio, il ciclo non viene eseguito neanche una volta.

**Esempio:**

```c
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}
```

---

[← Torna al Sommario](README.md) | [Vai a do...while →](do-while.md)
