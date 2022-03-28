/*programa que lê a entrada de texto digitado pelo usuário
usando uma formatação diferente no scanf para poder ler
um texto composto*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    char produto[30];

    printf("Informe o nome do produto: \n");
    scanf("\n%[^\n]s", produto);

    printf("Produto: %s \n", produto);
}