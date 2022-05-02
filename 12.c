//Decima Segunda Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    int somaLinha=0, somaColuna=0;
    int **matriz = malloc(sizeof(int*)*5);
    int *SL = malloc(sizeof(int)*5);
    int *SC = malloc(sizeof(int)*5);
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

    
    for(int i=0; i<5; i++){
        somaLinha=0;
        for(int j=0; j<5; j++){
            somaLinha+=matriz[i][j];
        }
        SL[i] = somaLinha;
    }
    
    for(int i=0; i<5; i++){
        somaColuna=0;
        for(int j=0; j<5; j++){
            somaColuna+=matriz[j][i]; 
        }
        SC[i] = somaColuna;
    }
    
    
    printf("Imprimindo a soma das Linhas no Vetor\n\n");
    for(int i=0; i<5; i++){
        printf("%d ",SL[i]);
    }
    
    printf("\n\n");
    
    printf("Imprimindo a soma das Colunas no Vetor\n\n");
    for(int i=0; i<5; i++){
        printf("%d ",SC[i]);
    }

    free(matriz);
    free(SL);
    free(SC);

}

