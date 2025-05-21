#include <stdio.h>
void main()
{
         int n, i, den = 1;
         float soma = 0;
         
         printf("Valor de n\n");
         scanf("%d",&n);

         soma = 0;
         for(i = 1; i <= n; i++){
                  soma += 1.0/den;
                  den +=2;
                  }

         printf("Soma:%f\n",soma);

}
