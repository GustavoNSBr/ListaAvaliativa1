#include <stdio.h>

int main() {
    int n, numeroN, digito, soma = 0;

    scanf("%d", &n);

    numeroN = n;

    
    if (n % 2 == 0) {
        printf("%d eh par\n", n);
    } else {
        printf("%d eh impar\n", n);
    }

    
    while (n != 0) {
        digito = n % 10; 
        soma += digito;   
        n /= 10;        
    }

    printf("A soma dos algarismos de %d eh %d\n", numeroN, soma);

    return 0;
}
