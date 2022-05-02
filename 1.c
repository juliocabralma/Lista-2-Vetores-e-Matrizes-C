//Segunda Lista

//Primeira Questao

#include <stdio.h>
#include <stdlib.h>


int main (){
    int vetor[10];
    int x, encontrado=0;

    for(int i=0; i<10; i++){
      printf("Insira o valor inteiro para a posicao %d do vetor: ", i);
      scanf("%d",&vetor[i]);
      printf("\n");
    }
    
    printf("\n");
    printf("\n");
    printf("Insira o valor de x que deseja buscar no vetor: ");
    scanf("%d", &x);
    printf("\n");
    printf("\n");

    for(int i=0; i<10; i++){
      if(vetor[i]==x){
        encontrado = 1;
        printf("O valor %d foi encontrado na posicao %d do vetor\n", x, i);
      }
    }

    if(encontrado==0){
      printf("O valor %d nao foi encontrado no vetor \n", x);
    }
}
