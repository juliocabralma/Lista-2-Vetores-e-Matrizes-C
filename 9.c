//Nona Questao

#include <stdio.h>
#include <stdlib.h>


int main (){
    int contador=0;
    int somaPares=0;
    float media;
    int **matriz = malloc(sizeof(int*)*3);
    for(int i=0; i<3; i++){ 
      matriz[i]=malloc(sizeof(int)*3);
    }

    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
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
    printf("Imprimindo diagonal secundaria\n\n");
  
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        if((i+j)==2){
            if(matriz[i][j]%2==0){
                contador++;
                somaPares+=matriz[i][j];
            }
        }
        printf("%d  ", matriz[i][j]);
      }
      printf("\n");
    }
    
    media = (float)somaPares/contador;
    
    printf("\n\n");
    if(contador>0){
        printf("A media por numeros pares da Diagonal Secundaria eh %.2f\n\n", media);   
    }
    else{
        printf("Nenhum elemento da Diagonal Secundaria eh par, tente outra vez\n\n");
    }
    
    free(matriz);	

}

