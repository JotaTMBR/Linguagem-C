#include <stdio.h> //Biblioteca standard de Imput/Output
int main()
{
    char car;                                   //declara var. car do tipo char
    printf("Digite um caractere e ENTER\n");    //mostrar na tela
    scanf("%c", &car);                          //%c para ler ou mostrar char 1 char
    printf("Caractere digitado é %c\n", car);
    return 0;
    //mostrou na tela o valorde car lido
} //fim main