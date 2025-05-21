
#include <stdio.h>

int main() {
    int j, i, cont;

    for(j = 1; j <= 10; j++) {
        cont = 0;

        for(i = 1; i <= j; i++) {
            if(j % i == 0) {
                cont++;
            }
        }

        if (cont == 2) {
            printf("%d é primo!\n", j);
        }
        else {
            printf("%d não é primo!\n", j);
        }
    }

    return 0;
}
