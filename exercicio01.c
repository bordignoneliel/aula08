#include <stdio.h>

void lanca (int num){
    if (num < 1){
        printf("decolar!");
    } else {
        printf ("%d, ", num);
        lanca(num - 1);
    }
}

int main() {
    int numero;

    printf("Digite um numero para o lançamento: ");
    scanf("%d", &numero);
    lanca(numero);

    return 0;
}