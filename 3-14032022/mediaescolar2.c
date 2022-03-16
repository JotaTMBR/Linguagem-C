/*programar para calcular a situação do aluno, neste programa teremos as
seguinte saidas:
    Aprovado, quando nota maior ou igual a 7
    Reprovado, quando for menos ou igual a 4
    Recuperacão, quando a nota entre maior que 4 e menor que 7
    */
#include <stdio.h>

#define MEDAPROV 7.0
#define MEDREPROV 4.0

int main()
{
    float na;

    printf("Digite a nota do aluno e tecle ENTER\n");
    scanf("%f",&na);

    if(na >= MEDAPROV){
    printf("O aluno está APROVADO\n");
    }
    else if(na <=MEDREPROV){
    printf("O aluno está REPROVADO\n");
    }
    else{
    printf("O aluno está em RECUPERAÇÃO\n");
    }

    return 0;
}