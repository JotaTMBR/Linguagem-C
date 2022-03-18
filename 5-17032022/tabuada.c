/*programa para calcular a tabuada de
de acordo com a entrada do usuário*/
#include <stdio.h>

int main(){

    int n;
    int mult;

    printf("Digite um número para a tabuada: ");
    scanf("%d", &n);

    for(mult = 0; mult <= 10; mult++){
        printf("%d x %d = %d\n", n, mult, n*mult);
    }
    return 0;
}