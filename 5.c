// Quinta Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    int vetor1[10];
    int vetor2[10];
    int vetorResultante[10];

    printf("\n");
    printf("Lendo o Vetor 1\n\n");
  
    for(int i=0; i<10; i++){
      printf("Insira o valor inteiro para a posicao %d do vetor 1: ", i);
      scanf("%d", &vetor1[i]);
      printf("\n");
    }
    
    printf("\n");
    printf("\n");
    printf("Lendo o Vetor 2\n\n");
  
    for(int i=0; i<10; i++){
      printf("Insira o valor inteiro para a posicao %d do vetor 2: ", i);
      scanf("%d", &vetor2[i]);
      printf("\n");
    }
    printf("\n");
    printf("\n");    

    for(int i=0; i<10; i++){
      vetorResultante[i] = vetor1[i]*vetor2[i];
    }
  

    printf("Imprimindo o Vetor Resultante da Multiplicacao do Vetor 1 com o Vetor 2\n\n");

    for(int i=0; i<10; i++){
      printf("%d ", vetorResultante[i]);
    }

}

