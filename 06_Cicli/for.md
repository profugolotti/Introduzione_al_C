# Ciclo `for`

- Pensato per cicli con un **numero noto di iterazioni** (detto ciclo definito o enumerativo).
- Ha tre parti: inizializzazione, condizione e aggiornamento.

**Esempio:**
```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}
```

---

[← Ciclo do...while](do-while.md) | [Vai a Osservazioni generali →](osservazioni.md)
