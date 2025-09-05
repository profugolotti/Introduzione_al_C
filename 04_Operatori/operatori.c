int main() {
    int a = 7, b = 3;

    printf("Valori iniziali: a = %d, b = %d\n\n", a, b);

    // -------------------------
    // Operatori aritmetici
    // -------------------------
    printf("Operatori aritmetici:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (divisione intera)\n", a / b);
    printf("a %% b = %d (resto)\n\n", a % b);

    // -------------------------
    // Operatori di confronto
    // -------------------------
    printf("Operatori di confronto:\n");
    printf("a == b -> %d\n", a == b);
    printf("a != b -> %d\n", a != b);
    printf("a > b  -> %d\n", a > b);
    printf("a < b  -> %d\n", a < b);
    printf("a >= b -> %d\n", a >= b);
    printf("a <= b -> %d\n\n", a <= b);

    // -------------------------
    // Operatori logici
    // -------------------------
    printf("Operatori logici:\n");
    printf("(a > 5) && (b < 5) -> %d\n", (a > 5) && (b < 5));
    printf("(a < 5) || (b < 5) -> %d\n", (a < 5) || (b < 5));
    printf("!(a == 7)          -> %d\n\n", !(a == 7));

    // -----------------------------------------
    // Operatore di assegnazione e composti
    // -----------------------------------------
    printf("Operatori di assegnazione:\n");
    int c = a;      // copia di a
    printf("c = %d\n", c);
    c += b;         // equivalente a c = c + b
    printf("c += b -> %d\n", c);
    c *= 2;         // equivalente a c = c * 2
    printf("c *= 2 -> %d\n", c);
    c -= 4;         // equivalente a c = c - 4
    printf("c -= 4 -> %d\n", c);

    return 0;
}