/*programa para calcular um desconto de um funcionario. Onde o salario 
sendo mmaior que 5000, terá um desconto de 5%, caso contrátio não 
haverá o desconto*/
#include <stdio.h>

#define LIMITE 5000

int main()
{
    float salario_funcionario;

    printf("Digite o salário do funcionário e tecle ENTER\n");
    scanf("%f", &salario_funcionario);

    if(salario_funcionario > LIMITE){
    printf("O desconto será de %.2f\n", salario_funcionario*0.05);
    printf("O valor fina é %.2f\n", salario_funcionario - (salario_funcionario*0.05));
    }
    else{
    printf("Não há desconto\n");
    }
    return 0;
}//fim main