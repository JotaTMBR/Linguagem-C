/*programa para trabalhar com funções. vamos usar funções
com retorno,sem retorno,com argumentos(parâmetros),sem
argumentos*/
#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    printf("\n");
    for(int i = 0; i <= 50; i++){
        printf("#");
    }
    printf("\n");
}
void separadorLinha(){
    printf("\n");
    for(int i = 0; i <= 50; i++){
        printf("_");
    }
    printf("\n");
}
void pularLinha(int qtdvezes){
    for(int i = 1; i <= qtdvezes; i++){
        printf("\n");
    }

}
char* comparar(int v1, int v2){
    if(v1 > v2)
        return "O primeiro numero é maior que o segundo";
    else if(v1 == v2)
        return "Os dois numeros sao iguais";
    else
        return "O primeiro numero é menor que o segundo";
}

void main(){
    int n1, n2;

    system("clear");
    //chamando a função separadorHT
    separadorHT();
    pularLinha(5);
    printf("\n\tPrograma que exibe uma mensagem\n");
    pularLinha(10);
    //chamando a função separadorLinha
    separadorLinha();
    pularLinha(2);
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite outro numero:\n");
    scanf("%d", &n2);
    
    pularLinha(1);
    printf(comparar(n1, n2));
    pularLinha(2);

    }