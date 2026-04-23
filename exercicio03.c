#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int b = 2;
    int e = 3;
    
    printf("%d elevado a %d e: %d\n", b, e, potencia(b, e));
    
    return 0;
}