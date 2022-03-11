#include <stdio.h>//Biblioteta standard In/Out // comando obrigatório
int main()
{
    //variaveis para fazer o calculo
    float x, j, soma, subtrair, multiplicar, dividir;/*usei float pois na divisão 
    tem chances de ter numeros quebrados*/
    
    printf("Digite o primeiro valor do calculo, e ENTER\n");//mens. na tela
    scanf("%f", &x);//número que o usuário irá digitar
    
    printf("Agora digite o segundo valor do calculo, e ENTER\n");//mens. na tela
    scanf("%f", &j);//número que o usuário irá digitar

 //Os calculos sempre tem que ser feitos dessa forma   
    soma = x + j;
    subtrair = x - j;
    multiplicar = x * j;
    dividir = x / j;

 //Aqui vai mostrar os resultados das operações matemáticas
    printf("O valor da soma é %f\n", soma);
    printf("O valor da subtração é %f\n", subtrair);
    printf("O valor da multiplicação é %f\n", multiplicar);
    printf("O valor da divisão é %f\n", dividir);

    return 0;    
    }//fim main