#include <stdio.h>
void main()
{
         int n, i, den = 1; 
         float x, soma = 0, termo;    
         printf("Valor de n e x\n");
         scanf("%d", &n);
         printf("Valor de x\n");
         scanf("%f", &x);

         soma = 0;
         for(i = 0; i < n; i++){
			termo =  x / den;               
         		if (i % 2 == 0) {
         			soma += termo;
         			}
         		else {
         			soma -= termo;
         				}
         		den += 2;
         }
         printf("Soma:%f\n",soma);
}
