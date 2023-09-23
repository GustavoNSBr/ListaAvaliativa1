#include <stdio.h>

int main(){
    int A, B, menorV, maiorV;
    scanf("%d %d", &A, &B);

    if (A < B){
        menorV = A;
        maiorV = B;
    } else if (A > B){
        menorV = B;
        maiorV = A;
    } else{
        printf("Os valores lidos sao iguais");
        return 0;
    }
    
    printf("%d eh maior que %d \n", maiorV, menorV);

    if (maiorV % menorV == 0){
        printf("%d eh multiplo de %d \n", maiorV, menorV);
    } else{
        printf("%d nao eh multiplo de %d \n", maiorV, menorV);
    }    

    return 0;
}