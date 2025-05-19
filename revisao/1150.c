// 00001150) Faça um algoritmo que leia um valor N inteiro e maior do que 1, e
// calcule e escreva o seu maior divisor (excetuando N).

#include <stdio.h>

int main() {

    int n, d;

    printf("Informe um valor de n\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Erro\n");
        return 1;
    }

    d = n / 2;

    while (d > 0) {
        if (n % d == 0) {
            printf("%d\n", d);
            break;
        }
        d--;
    }

    return 0;
}
