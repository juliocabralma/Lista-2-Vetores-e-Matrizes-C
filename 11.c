//Decima Primeira Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    int soma=0;
    int **matriz = malloc(sizeof(int*)*5);
    for(int i=0; i<5; i++){ 
      matriz[i]=malloc(sizeof(int)*5);
    }
    
    for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
        printf("Insira o inteiro da posicao [%d][%d] da Matriz: ", i, j);
        scanf("%d",&matriz[i][j]);
        printf("\n");
      }
    }  

    printf("\n\n");
    printf("Imprimndo a Matriz\n\n");

    for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
        printf("%d ",matriz[i][j]);
        if(matriz[i][j]<=9){
            printf(" ");
        }
      }
      printf("\n");
    }

    printf("\n\n");

    
    printf("Imprimindo a soma da Linha 4 da Matriz: ");
    for(int j=0; j<5; j++){
        soma+=matriz[4][j];
    }
    printf("%d\n\n", soma); 
    
    soma=0;
    printf("Imprimindo a soma da Coluna 2 da Matriz: ");
    for(int i=0; i<5; i++){
        soma+=matriz[i][2];
    }
    printf("%d\n\n", soma); 
    
    soma=0;
    printf("Imprimindo a soma da Diagonal Principal da Matriz: ");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==j){
                soma+=matriz[i][j];      
            }
        }
    }
    printf("%d\n\n", soma); 
    
    soma=0;
    printf("Imprimindo a soma da Diagonal Secundaria da Matriz: ");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if((i+j)==4){
                soma+=matriz[i][j];      
            }
        }
    }
    printf("%d\n\n", soma); 
    
    soma=0;
    printf("Imprimindo a soma de Todos os Elementos da Matriz: ");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            soma+=matriz[i][j]; 
        }
    }
    printf("%d\n\n", soma); 

    free(matriz);
}

