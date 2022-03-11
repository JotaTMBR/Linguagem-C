#include <stdio.h>
int main()
{
    int n1, n2, divisao, resto;/*o int foi usado para se possive dar
    resto no resultado da divisão*/

    printf("Digite um número e dê ENTER\n");//mens. do usuário
    scanf("%d",&n1);//número que o usuário digitou

    printf("Digite outro número para a divisão e dê ENTER\n ");//mens. do usuário
    scanf("%d",&n2);//número que o usuário digitou

 //calculos de divisão e resto da divisão
    divisao = n1 / n2;
    resto = n1 % n2;

 //aqui vai aparecer o resultado da divisão
    printf("O resultado da divisão é %d\n", divisao);
    printf("O resto da divisão é %d\n", resto);

    return 0;
    }//fim main