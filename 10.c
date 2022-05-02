//Decima Questao

#include <stdio.h>
#include <stdlib.h>


int main (){
    int menor, linhaMenor=0, colunaMenor=0;
    int **matriz = malloc(sizeof(int*)*4);
    for(int i=0; i<4; i++){ 
      matriz[i]=malloc(sizeof(int)*4);
    }
    
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        printf("Insira o inteiro da posicao [%d][%d] da Matriz: ", i, j);
        scanf("%d",&matriz[i][j]);
        printf("\n");
      }
    }  

    printf("\n\n");
    printf("Imprimndo a Matriz\n\n");

    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        printf("%d  ",matriz[i][j]);
        }
      printf("\n");
    }

    printf("\n\n");

    menor = matriz[0][0];
    
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        if(matriz[i][j]<menor){
            menor = matriz[i][j];
            linhaMenor = i;
            colunaMenor = j;
        }
      }
    }
    
    
    printf("\n\n");
    
    printf("O menor valor da Matriz eh %d e sua posicao eh [%d][%d]", menor, linhaMenor, colunaMenor);   
    
    free(matriz);
}

