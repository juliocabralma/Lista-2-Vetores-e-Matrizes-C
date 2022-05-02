//Terceira Questao


#include <stdio.h>
#include <stdlib.h>


int main (){
    int vetor[20];
    int pares=0, impares=0, somaImpares=0;
    float mediaImpares;


    printf("\n");
    for(int i=0; i<20; i++){
      printf("Insira o valor inteiro para a posicao %d do vetor: ", i);
      scanf("%d",&vetor[i]);
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


    for(int i=0; i<20; i++){
      if(vetor[i]%2==0){
         pares++; 
      }
      else{
        somaImpares+=vetor[i];
        impares++;
      }
    }

    mediaImpares = (float)somaImpares/impares;

    printf("A quantidade de pares presentes no vetor eh %d\n\n", pares);

    printf("A media dos numeros impares no vetor eh %.1f\n\n", mediaImpares);
  
}

