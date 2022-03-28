/*programa para a soma de dois valores*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int soma, n1, n2;
    
    printf("Informe o primeiro numero:");
    scanf("%d", &n1);
    printf("Informe o segundo numero:");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("O resultado da soma é: %d\n", soma);

}