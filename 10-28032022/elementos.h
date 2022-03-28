/*este arquivo foi nomeado com a extenção
 .h(header->biblioteca de dados). Assim podemos
 criar algumas funçoes e/ou estruturas compartilhadas,
 sendp possivel ser utilizadas por diversos programas
 todas as vezes que esta biblioteca for usada, é importante
 realizar a sua inclusão no código que irá ultilizá-la*/
 #include <stdio.h>
 #include <stdlib.h>

void separador(){
     printf("\n");
     for(int i = 0; i <= 100; i++){
         printf("#");
    }
    printf("\n");
}
void quebrarLinha(int qtdVezes){
    for(int i = 1; i <= qtdVezes; i++){
        printf("\n");
    }
}