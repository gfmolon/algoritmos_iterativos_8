// I00003100) Faça um algoritmo que leia 10 números e para cada um escreva a
// soma dos seus dígitos formantes.

#include <stdio.h>

int main() {

    int i, n, temp, soma;

    for (i = 1; i <= 10; i++) {
        printf("Informe um número");
        scanf("%d", &n);

        temp = n;
        soma = 0;
        while (temp != 0) {

            soma += temp % 10;
            temp /= 10;
        }

        printf("A soma dos dígitos de %d é %d", n, soma);
    }

    return 0;
}
