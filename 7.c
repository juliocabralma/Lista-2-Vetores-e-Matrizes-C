// Setima Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    int vetor[20];
    int decrescente = 19, auxiliar;

    printf("\n");
    printf("Lendo o Vetor\n\n");
  
    for(int i=0; i<20; i++){
      printf("Insira o valor inteiro para a posicao %d do vetor 1: ", i);
      scanf("%d", &vetor[i]);
      printf("\n");
    }
    
    printf("\n");
    printf("\n");
    printf("Imprimindo o Vetor\n\n");
  
    for(int i=0; i<20; i++){
      printf("%d ", vetor[i]); 
    }
    printf("\n");
    printf("\n");    

    for(int i=0;i<10;i++){
      auxiliar = vetor[i];
      vetor[i] = vetor[decrescente];
      vetor[decrescente] = auxiliar;
      decrescente--;
    }

     printf("\n");
    printf("\n");
    printf("Imprimindo o Vetor trocado\n\n");
  
    for(int i=0; i<20; i++){
      printf("%d ", vetor[i]); 
    }
    printf("\n");
    printf("\n");   
    
}

