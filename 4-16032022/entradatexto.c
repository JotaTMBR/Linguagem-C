/*Programa pede ao usuário que digite
seu nome. Ao ser alocado na variável nome*/
#include <stdio.h>

int main(){

    char nome[31] = "";

    printf("Digite seu nome e tecle ENTER\n");
    //foi colocado %s no scanf pois a variavel nome possui mais de um caracter
    scanf("%s", nome);
    printf("%s\n",nome);


    return 0;
}