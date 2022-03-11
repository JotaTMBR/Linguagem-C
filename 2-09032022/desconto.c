#include <stdio.h>
int main()
{
    float preco,taxa, desconto, resultado;

    printf("Digite o preço do produto: ");//mens. para o usuário
    scanf("%f", &preco);//resposta do usuário

    printf("Digite a taxa de desconto: ");//mens. para o usuário
    scanf("%f", &taxa);//resposta do usuário
    /*O vendedor entrará com o valor da taxa e em seguida 
    nosso programa divide por 100 para obter o valor em percentual. Sendo
    assim, quando o vendedor digitar 5, o programa vai calcular e teremos
    o resultado 0,05 que representa 5% */
    taxa = taxa / 100;
    desconto = preco * taxa;
    resultado = preco - desconto;

    printf("O valor do desconto é: %f e o valor final é %f\n",desconto,resultado);

    return 0;
}