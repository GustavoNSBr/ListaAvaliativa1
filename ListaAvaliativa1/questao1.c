#include <stdio.h>

int main() {
    int ano;

    scanf("%d", &ano);

    if ((ano >= 1896 && ano <= 2020 && ano % 4 == 0) || (ano == 2022)) {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    }

    if (ano >= 1930 && (ano % 4 == 0 || ano == 1942 || ano == 1946) && ano <= 2018) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }

    if (!((ano >= 1896 && ano <= 2020 && ano % 4 == 0) || (ano == 2022)) && !(ano >= 1930 && (ano % 4 == 0 || ano == 1942 || ano == 1946) && ano <= 2018)) {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }

    return 0;
}
