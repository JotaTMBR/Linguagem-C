#include <stdio.h>
#include <stdlib.h>

void main(){
    int cargo;
    float salAtual, reajuste;

    printf("informe o cargo do funcionario: ");
    scanf("%d", &cargo);
    printf("Informe o salario atual: ");
    scanf("%f", &salAtual);

    if(cargo == 1)
        reajuste = (salAtual * 7) / 100;
    else if(cargo == 2)
        reajuste = (salAtual * 9) / 100;
    else if(cargo == 3)
        reajuste = (salAtual * 5) / 100;
    else
        reajuste = (salAtual * 12) / 100;

    printf("O reajuste é %.2f\n", reajuste);
    printf("O novo salario é %.2f\n", salAtual + reajuste);

}