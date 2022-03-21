/*programa para validar o cpf do usuário.
quando o cpf for inserido, pegamos os 9 primeiros
digitos e passamos para o calculo. É utilizado um número
por vez do cpf multiplicado pelo peso partindo de 10 
e indo até 2. Na segunda parte do calculo pegamos os 9
primeiros mais o digito encontrado e moltiplicamos pelo
peso a partir de 11. Se o resto da divisão for menor que 2,
então o digito será 0; Caso contrario, o digito será
subtraido por 11.*/
#include <stdio.h>

int main(){
    
    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char cpf[11];

    system("clear");
    printf("Digite o número do seu CPF e tecle ENTER\n");
    scanf("%s", cpf);
    /*Converter todos os caracteres para número. Para isso
    devemos criar um conjunto de números em tipo int e
    realizar a conversão usando for*/
    
    int iCpf[11];
    for(int x = 0; x <= 10; x++){
        iCpf[x] = cpf[x] - 48;
    }


    for(int i = 0 ; i <= 8 ; i++){
        total += iCpf[i]*peso10;
        peso10--;
    }
    resto = total % 11;
 /*se o resto da divisão for menor que 2 , então o primeiro 
 digito de verificação será 0*/
    if(resto < 2){
        iCpf[9]=0;
    }
    else{
        iCpf[9] = 11 - resto;
    }
   
    total = 0;
    resto = 0; 
     
    for(int i = 0 ; i <= 9 ; i++){
        total += iCpf[i] % 11;
    }
    resto = total % 11;
    if(resto < 2){
        iCpf[10] = 0;
    }
    else{
        iCpf[10] = 11 - resto;
    }

    for(int i = 0 ; i <= 10; i++){
        printf("%d", iCpf[i]);
    }
    

    return 0;
}