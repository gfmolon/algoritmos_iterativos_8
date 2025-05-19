#include <stdio.h>

int main() {

    int n, d, menor;

    printf("Informe o valor de n\n");
    scanf("%d", &n);

    if (n <= 1) {
        return 1;
    }

    d = 2;

    while (d <= n) {
        if (n % d == 0) {
            printf("%d", d);
            break;
        }
        d++;
    }

    return 0;
}
