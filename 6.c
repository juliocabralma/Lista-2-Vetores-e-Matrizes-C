// Sexta Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    int vetor[20];
    int menor, posicaoMenor=0;

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

    menor = vetor[0];
  
    for(int i=0; i<20; i++){
      printf("%d ", vetor[i]);
      if(vetor[i]<menor){
        menor = vetor[i];
        posicaoMenor = i;
      }
    }
    printf("\n");
    printf("\n");       

    printf("O menor elemento do vetor = %d e a sua posicao eh %d\n\n", menor, posicaoMenor);

}

