// Quarta Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    int vetor[20];
    int positivos=0;

    printf("\n");
    for(int i=0; i<20; i++){
      printf("Insira o valor inteiro para a posicao %d do vetor: ", i);
      scanf("%d",&vetor[i]);
      printf("\n");
    }
    
    printf("\n");
    printf("\n");
  
    printf("Imprimindo os valores Positivos do vetor\n\n");

    for(int i=0; i<20; i++){
      if(vetor[i]>0){
        printf("%d ", vetor[i]);
        positivos++;
      }      
    }


    printf("\n");
    printf("\n");

    printf("A quantidade de Numeros Positivos presentes no vetor eh %d\n\n", positivos);

}

