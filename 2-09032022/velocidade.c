#include <stdio.h>
int main()
{
    //variaveis para calcular o temo e a distancia percorrida
    int distancia, tempo, resultado;//int para dar número inteiro

    printf("Entre com a distância percorrida: ");//mens. na tela
    scanf("%d", &distancia);//resposta do usuário

    printf("Entre com o tempo gasto: ");//mens. na tela
    scanf("%d", &tempo);//resposta do usuário
 //calculo usado para calcular a quilometragem
    resultado = distancia / tempo;
    
    printf("\nA velocidade média é %dKM/h\n", resultado);//mens. do resultado na tela

    return 0;
}//fim main