#include <stdio.h>

int main(){

    char cargo[15] = "";

    printf("Digite o nome do cargo e tecle ENTER\n");
    scanf("%s", cargo);

    if(strcmp(cargo, "Diretor")==0){
        printf("O salário de Diretor é de R$15000,00\n");
    }
    else if(strcmp(cargo, "Gerente")==0){
        printf("O salário de Gerente é de R$12000,00\n");
    }
     else if(strcmp(cargo, "Analista")==0){
        printf("O salário de Analista é de R$12000,00\n");
    }
     else if(strcmp(cargo, "Assistente")==0){
        printf("O salário de Assistente é de R$12000,00\n");
    }
    else if(strcmp(cargo, "Auxiliar")==0){
        printf("O salário de Auxiliar é de R$12000,00\n");
    }
    else{
        printf("Não tem salário.\n");
    }

    return 0;
}