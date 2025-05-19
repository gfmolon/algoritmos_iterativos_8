#include <stdio.h>

int main() {

    int n;

    while (1) {

        printf("Informe um número:\n");
        scanf("%d", &n);

        if (n < 0) {
            break;
            return 1;
        }

        if (n % 2 == 0) {
            printf("par -> %d\n", n);
        }
    }

    return 0;
}
