#include <stdio.h>

int soma(int n){
    if(n <= 1){
        return 1;
    }else{
        return n + soma(n - 1);
    }
}
int main(){
    int num = 10;
    printf("A soma de 1 ate %d e: %d\n", num, soma(num));
    return 0;
}    