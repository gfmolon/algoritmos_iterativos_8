#include <stdio.h>

int main() {

    float peso, altura, maior_peso, maior_altura, i;

    maior_peso = 0;
    maior_altura = 0;

    for (i = 1; i <= 10; i++) {

        printf("Informe peso e altura\n");
        scanf("%f%f", &peso, &altura);

        if (altura > maior_altura) {
            maior_altura = altura;
            maior_peso = peso;
        }
    }

    printf("Pessoa mais alta:\n");
    printf("Peso:%f Altura:%f\n", maior_peso, maior_altura);

    return 0;
}
