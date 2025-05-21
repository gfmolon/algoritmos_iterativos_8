#include <stdio.h>

int main() {

    int n, i, j, fat;

    for(j = 1; j <= 5; j++) {
        fat = 1;
        printf("Informe o numero eu devolvo o fatorial\n");
        scanf("%d",&n);
        for(i = 1; i <= n; i++) {
            fat *= i;
        }
        printf("O fatorial de %d é %d\n", n, fat );
    }
return 0;

}
