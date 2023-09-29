#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Os valores lidos sao iguais\n");
    } else {
        int maior, menor;
        if (a > b) {
            maior = a;
            menor = b;
        } else {
            maior = b;
            menor = a;
        }

        printf("%d eh maior que %d\n", maior, menor);

        if (menor == 0) {
            printf("%d nao eh multiplo de %d\n", maior, menor);
        } else if (maior % menor == 0) {
            printf("%d eh multiplo de %d\n", maior, menor);
        } else {
            printf("%d nao eh multiplo de %d\n", maior, menor);
        }
    }

    return 0;
}
