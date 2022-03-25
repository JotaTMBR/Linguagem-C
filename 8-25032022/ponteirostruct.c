/*programa para cadastrar clientes com os 
seguintes dados: nome, idade, email*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    struct cliente{
        char nome[30];
        char email[100];
        int idade;
    };
    struct cliente novoCliente, *pNovoCliente;
    pNovoCliente = &novoCliente;
    
    system("clear");
    printf("Entre com o nome do cliente: \n");
    scanf("%s", &pNovoCliente->nome);
    printf("Entre com o email do cliente\n");
    scanf("%s", &pNovoCliente->email);
    printf("Entre com a idade do cliente\n");
    scanf("%s", &pNovoCliente->idade);

    printf("Usuário Registrado: %s\n",pNovoCliente->nome);
    printf("Email Registrado: %s\n", pNovoCliente->email);  
}