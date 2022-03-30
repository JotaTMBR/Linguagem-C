#include <stdio.h>
#include <stdlib.h>
#include "cursosSenac.h"
#include "unidadeSenac.h"

void gravar(){

    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");

    if(arquivo == NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1);
    }

    cursos cur, *pcur;
    unidades uni, *puni;

    pcur = &cur;
    puni = &uni;

    printf("Entre com o nome do Curso:\n");
    fgets(pcur->nomeCurso,130,stdin);

    printf("Coloque a descricao do Curso:\n");
    fgets(pcur->descricao,1050,stdin);

    printf("Digite a Data de Inicio do Curso:\n");
    fgets(pcur->dataInicio,60,stdin);

    printf("Digite a Data do Termino do Curso:\n");
    fgets(pcur->dataFinal,60,stdin);

    printf("Digite a Carga Horaria do Curso:\n");
    fgets(pcur->cargaHoraria,54,stdin);

    printf("Digite o Preco do Curso:\n");
    fgets(pcur->preco,60,stdin);

    printf("Informe o Nome da Unidade do Senac:\n");
    fgets(puni->nomeUnidade,150,stdin);

    printf("Informe a localização da Unidade:\n");
    fgets(puni->localizacao,250,stdin);

    printf("Informe o horario de funcionamento da Unidade:\n");
    fgets(puni->horarioFuncionamento,75,stdin);

    printf("Digite o Telefone de Contato da Unidade:\n");
    fgets(puni->telefoneContato,65,stdin);

    fprintf(arquivo,pcur->nomeCurso);
    fprintf(arquivo,pcur->descricao);
    fprintf(arquivo,pcur->dataInicio);
    fprintf(arquivo,pcur->dataFinal);
    fprintf(arquivo,pcur->cargaHoraria);
    fprintf(arquivo,pcur->preco);
    fprintf(arquivo,puni->nomeUnidade);
    fprintf(arquivo,puni->localizacao);
    fprintf(arquivo,puni->horarioFuncionamento);
    fprintf(arquivo,puni->telefoneContato);

    fclose(arquivo);
    
}