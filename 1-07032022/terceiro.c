//programa p/ calcular  area, dado o raio
#include <stdio.h> //biblioteca standard Input/Output
#define PI 3.14159 //constante PI
//a seguir a função main()
int main()
{
    float raio, area;   //duas vars. declaradas 
    //mostra na tela uma messagem com printf
    printf("Digite o valor do raio do circulo, e ENTER\n"); //printf exibe uma informação na tela para o usuário
   //a seguir mostra na tela o valor do raio lido
    //usando 12 colunas , e 2 decimais arredondados
    scanf("%f", &raio);//
    //por ex. 1.576 é arredondado para 1.58, só na tela
    printf("Raio digitado é %12.2f\n", raio);
    area = PI * raio * raio;
    printf ("Area do circulo com raio %f é %f\n", raio, area);
    return 0;
}// fim main