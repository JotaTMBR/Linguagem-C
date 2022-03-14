/*programa para calcular a situação do aluno se está
aprovado ou reprovado, vamos levar em consideração, a nota do aluno 
e compará-la a média de aprovação da escola. Caso a nota do aluno seja
maior ou igual a 7, então o alunos estatá aprovado, caso contrário
estará reprovado*/

/*Incluir o cabeçalho de entrada  e saída de dados padrão: 
std(Standard) e io(Input | Output)*/
#include <stdio.h>
/*definir uma constante sempre em letras MAIÚSCULAS*/
#define MEDIAESCOLA 7.0

int main()
{
    //desclaração da variável notaAluno com tipo float
    float nota_aluno;

    printf("Digite a nota do aluno e tecle ENTER\n");
    scanf("%f", &nota_aluno);

    //Desvio de fluxo com if .. else
    if(nota_aluno >= MEDIAESCOLA){
    printf("O aluno está APROVADO\n");    
    }
    else{
    printf("O aluno foi REPROVADO\n");
    }
    return 0;
}//fim main