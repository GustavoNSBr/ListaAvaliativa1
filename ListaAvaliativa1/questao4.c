#include <stdio.h>

int main() {
    char nivelExperiencia;
    float salarioAtual, aumento, novoSalario;

    scanf("%c", &nivelExperiencia);
    scanf("%f", &salarioAtual);

        if(nivelExperiencia == 'a'){
            aumento = salarioAtual * 0.05;
        } else if (nivelExperiencia == 'b'){
            aumento = salarioAtual * 0.07;
        } else if (nivelExperiencia == 'c'){
            aumento = salarioAtual * 0.08;
        } else{
            aumento = 0.0;
            printf("Nível de experiência inválido.\n");
        }

        novoSalario = salarioAtual + aumento;

        printf("R$ %.2f\n", novoSalario);

    return 0;
}
