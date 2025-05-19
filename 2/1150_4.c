#include <stdio.h>

int main() {

    int n, d;

    printf("Informe o valor de n\n");
    scanf("%d", &n);

    if (n <= 1) {
        return 1;
    }

    d = n / 2;

    while (d > 0) {
        if (n % d == 0) {
            printf("%d", d);
            break;
        }
        d--;
    }

    return 0;
}
