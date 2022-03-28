/*programa para registrar a entrada de texto que 
o usuário digitou*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    char produto[30];
    
    printf("Informe o nome do produto: \n");
    scanf("%s", produto);

    printf("Produto: %s\n", produto);
    
}