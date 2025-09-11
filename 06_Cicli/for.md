# Ciclo `for`

- Pensato per cicli con un **numero noto di iterazioni** (detto ciclo definito o enumerativo).
- Ha tre parti (*non obbligatorie*):
  - **inizializzazione**: si fissa il valore iniziale della variabile contatore
  - **condizione**: controllata ad ogni iterazione, il ciclo termina se è falsa
  - **aggiornamento**: si modifica il valore della variabile contatore ad ogni iterazione


**Sintassi:**
```c
for (inizializzazione; condizione; aggiornamento) {
    // blocco di istruzioni
}
```

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

**Output previsto:**

```text
i = 0
i = 1
i = 2
i = 3
i = 4
```

> ⚠️Nota: in questo esempio, la variabile `i` è definita **solo all'interno** del ciclo `for`.

---

[← Ciclo do...while](do-while.md) 
