#include <stdio.h>

int main() {
    int senhaCadastrada, senhaInserida;

    scanf("%d", &senhaCadastrada);

    printf("senha cadastrada: %04d\n", senhaCadastrada);

    do {
        scanf("%d", &senhaInserida);

        if (senhaInserida == senhaCadastrada) {
            printf("senha valida!\n");
        } else {
            printf("senha invalida!\n");
        }
    } while (senhaInserida != senhaCadastrada);

    return 0;
}
