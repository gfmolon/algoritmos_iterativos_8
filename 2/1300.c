#include <stdio.h>

int main() {

    int n1, n2, i, j, soman1 = 0, soman2 = 0;

    printf("Informe o valor de n1 e n2\n");
    scanf("%d%d", &n1, &n2);

    for (i = 1; i < n1; i++) {
        if (n1 % i == 0) {
            soman1 += i;
        }
    }

    for (j = 1; j < n2; j++) {
        if (n2 % j == 0) {
            soman2 += j;
        }
    }

    if (n1 == soman2 && n2 == soman1) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
