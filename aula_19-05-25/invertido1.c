#include <stdio.h>

int main() {

    int n, d, n_orig, inv;

    printf("Informe o valor de n\n");
    scanf("%d",&n);

    inv = 0;
    n_orig = n;

   while(n != 0) {

       d = n % 10;
       inv = (inv * 10) + d % 10;
       n /= 10;

   }

   printf("O valor de %d é %d", n_orig, inv);

    return 0;

}
