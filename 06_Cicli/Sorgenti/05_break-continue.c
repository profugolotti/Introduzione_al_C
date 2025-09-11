#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 3) continue; // salta il 3
        if (i == 7) break;    // interrompe il ciclo
        printf("i = %d\n", i);
    }
    return 0;
}
