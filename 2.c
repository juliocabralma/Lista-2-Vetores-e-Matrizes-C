//Segunda Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    int vetor[10];
    int x;


    printf("\n");
    for(int i=0; i<10; i++){
      printf("Insira o valor inteiro para a posicao %d do vetor: ", i);
      scanf("%d",&vetor[i]);
      printf("\n");
    }
    
    printf("\n");
    printf("\n");
  
    printf("Imprimindo o Vetor\n\n");

    for(int i=0; i<10; i++){
      printf("%d ", vetor[i]);
    }

    for(int i=0; i<10; i++){
      if(vetor[i]%2==0){
        vetor[i]=1;
      }
    }

    printf("\n");
    printf("\n");

    printf("Imprimindo o Vetor com todos os valores pares substituidos por 1\n\n");

    for(int i=0; i<10; i++){
      printf("%d ", vetor[i]);
    }
  
}

