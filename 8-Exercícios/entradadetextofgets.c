/*programa para ler a entrada de texto composto do usuario
usando a função fgets()*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    char produto[30];

    printf("Informe o nome do produto: ");
    fgets(produto, 30, stdin);

    printf("Produto: %s \n", produto);
}