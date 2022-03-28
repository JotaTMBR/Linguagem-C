#include <stdio.h>
#include <stdlib.h>

void main(){
    float num, soma = 0, media = 0;
    int i;
    //inicio do laço for
    system("clear");
    for (i = 1; i <= 10; i++){
        printf("Informe o numero: ");
        scanf("%f", &num);
        soma += num;
    }
    //A media deve ser calculada após a interação
    media = soma / 10;
    printf("A medida é: %.2f\n", media);
}