//Decima Terceira Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    
    int **N1 = malloc(sizeof(int*)*4);
    int **N2 = malloc(sizeof(int*)*4);
    int **M1 = malloc(sizeof(int*)*4);
    int **M2 = malloc(sizeof(int*)*4);
    for(int i=0; i<4; i++){ 
      N1[i]=malloc(sizeof(int)*6);
    }
    for(int i=0; i<4; i++){ 
      N2[i]=malloc(sizeof(int)*6);
    }
    for(int i=0; i<4; i++){ 
      M1[i]=malloc(sizeof(int)*6);
    }
    for(int i=0; i<4; i++){ 
      M2[i]=malloc(sizeof(int)*6);
    }
    
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        printf("Insira o inteiro da posicao [%d][%d] da Matriz N1: ", i, j);
        scanf("%d", &N1[i][j]);
        printf("\n");
      }
    }  

    printf("\n\n\n\n");
    
    
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        printf("Insira o inteiro da posicao [%d][%d] da Matriz N2: ", i, j);
        scanf("%d", &N2[i][j]);
        printf("\n");
      }
    } 
    printf("\n\n\n\n");
    
    printf("Imprimindo a Matriz N1\n\n");

    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        printf("%d ", N1[i][j]);
        if(N1[i][j]<=9){
            printf(" ");
        }
      }
      printf("\n");
    }
    
    printf("\n\n\n\n");
    
    printf("Imprimindo a Matriz N2\n\n");

    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        printf("%d ", N2[i][j]);
        if(N2[i][j]<=9){
            printf(" ");
        }
      }
      printf("\n");
    }

    printf("\n\n");
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            M1[i][j] = N1[i][j]+N2[i][j];
        }
    }
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            M2[i][j] = N1[i][j]-N2[i][j];
        }
    }

    printf("\n\n");
    
    
    printf("Imprimindo a Matriz M1\n\n");

    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        printf("%d ", M1[i][j]);
        if(M1[i][j]<=9){
            printf(" ");
        }
      }
      printf("\n");
    }

    printf("\n\n");
    
    
    printf("Imprimindo a Matriz M2\n\n");

    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        printf("%d ", M2[i][j]);
        if(M2[i][j]<=9){
            printf(" ");
        }
      }
      printf("\n");
    }

    printf("\n\n");
    
    
    free(N1);
    free(N2);
    free(M1);
    free(M2);
}

