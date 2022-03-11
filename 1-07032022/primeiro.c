#include <stdio.h> //Biblioteca standard de Imput/Output
int main()
{
    int j;                                      //Declara var. j inteira, só recebe numero inteiro
    printf("Digiteo valor inteiro e ENTER\n");  //Mostra na tela a informação
    scanf("%d",&j);                             //Ler j. NÃO digitar NADA entre %d e " 
    printf("Valor de j é %d\n", j);             //Mostra na tela o valor de j lido
    return 0;
} //Fim