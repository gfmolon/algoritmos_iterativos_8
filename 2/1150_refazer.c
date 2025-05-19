#include <stdio.h>

int main() {

    int n, d;

    printf("Qual valor de n\n");
    scanf("%d", &n);

    if (n <= 1) {
        return 1;
    }

    d = n / 2;

    while (d > 0) {
        if (n % d == 0) {
            printf("%d", n);
            break;
        }
        d--;
    }

    return 0;
}
