/*programa para exibir o salario do
cargo do funcionario de acordo com a 
escolha do usuario*/
#include <stdio.h>

int main(){

    int opcao = 0;

    //comando para limpar a tela usando system("clear"), ou clrscr()
    system("clear");//clear screen(limpar tela)

    printf("#########################################################");
    printf("\t\n#\t Programa para exibir salario\t\t\t#\n");
    printf("#########################################################\n");
    printf("Escolha um dos cargos abaixo digitando o número\n");
    //o comando \t serve para tabulação, util para dar espaços do comando abaixo.
    //além do printf em só uma linha, também pode ser usado em várias outras
    printf("\t1 - Diretor\n\t2 - Gerente\n\t3 - Analista\n\t4 - Assistente\n\t5 - Auxiliar\n");
    printf("----------------------------------------------------------\n");
    scanf("%d", &opcao);

    //switch para dar o resultado da escolha do usuário 
    switch(opcao){
        case 1:
            printf("O salário do Diretor é R$15000,00\n");
            break;
        case 2:
            printf("O salário do Gerente é R$12000,00\n");
            break;
        case 3:
            printf("O salário do Analista é R$8000,00\n");
            break;
        case 4:
            printf("O salário do Assistente R$4000,00\n");
            break;
        case 5:
            printf("O salário do Auxiliar é R$2000,00\n");
            break;

        default:
            printf("Não há salário.\n");
            break;
    }
    
    return 0;
}