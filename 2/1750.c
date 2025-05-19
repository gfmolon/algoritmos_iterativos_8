#include <stdio.h>

int main() {

    float imc, peso, altura, maior_imc = 0, maior_peso = 0, maior_altura = 0;
    int i;

    for (i = 1; i <= 10; i++) {

        printf("Peso e altura\n");
        scanf("%f%f", &peso, &altura);

        imc = peso / (altura * altura);

        if (imc > maior_imc) {
            maior_imc = imc;
            maior_peso = peso;
            maior_altura = altura;
        }
    }

    printf("Maior imc: %f", maior_imc);
    printf("peso: %f, altura: %f", maior_peso, maior_altura);

    return 0;
}
