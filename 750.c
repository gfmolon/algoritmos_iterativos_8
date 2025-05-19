#include <stdio.h>

int main() {

    int n, i;

    printf("Informe o valor de n\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }

    return 0;
}
