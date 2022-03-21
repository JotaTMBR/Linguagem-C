#include <stdio.h>

int main(){
    int decimal = 0;
    int resto = 0;
    int multiplicador = 1;
    int resultado = 0;

    system("clear");
    printf("Digite um número e tecle ENTER\n");
    scanf("%d", &decimal);
    while(decimal != 0){
        resto = decimal % 2;
        decimal = decimal / 2;
        resultado = resultado + resto * multiplicador;
        multiplicador = multiplicador * 10;
    }
    printf("%d\n", resultado);

    return 0;
}