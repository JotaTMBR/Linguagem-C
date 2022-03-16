/*Programa que exibe uma mensagem de 
boas vindas ao nosso usuário*/
#include <stdio.h>

int main(){

    char texto[20] = "Olá! Seja Bem Vindo";
    //foi usado o  %s pois o texto possui mais de um caractere
    printf("%s",texto);

    return 0;
}