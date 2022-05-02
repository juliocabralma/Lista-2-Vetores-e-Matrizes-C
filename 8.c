//Oitava Questao

#include <stdio.h>
#include <stdlib.h>


int main (){
    int quantAlunos, quantAprovados=0, quantRecuperacao=0, quantReprovados=0;
    float media, somaNotas;

    printf("\n");
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &quantAlunos);
    printf("\n");  
    printf("\n");

    float **notas = malloc(sizeof(float*)*quantAlunos);
    
    char **nome = malloc(sizeof(char*)*quantAlunos);
    char **nomeAprovados = malloc(sizeof(char*)*quantAlunos);
    char **nomeRecuperacao = malloc(sizeof(char*)*quantAlunos);
    char **nomeReprovados = malloc(sizeof(char*)*quantAlunos);
    float *mediaAprovados = malloc(sizeof(float)*quantAlunos);
    float *mediaRecuperacao = malloc(sizeof(float)*quantAlunos);
    float *mediaReprovados = malloc(sizeof(float)*quantAlunos);

    int indiceAprovados=0, indiceRecuperacao=0, indiceReprovados=0;

  
    for(int i=0; i<quantAlunos; i++){ 
      nome[i]=malloc(sizeof(char)*100);
    }

     for(int i=0; i<quantAlunos; i++){ 
      nomeAprovados[i]=malloc(sizeof(char)*100);
    }

     for(int i=0; i<quantAlunos; i++){ 
      nomeRecuperacao[i]=malloc(sizeof(char)*100);
    }

     for(int i=0; i<quantAlunos; i++){ 
      nomeReprovados[i]=malloc(sizeof(char)*100);
    }

    for(int i=0; i<quantAlunos; i++){ 
      notas[i]=malloc(sizeof(char)*6);
    }

  
    for(int i=0; i<quantAlunos; i++){
      printf("Insira apenas o primeiro nome do aluno %d: ", i);
      fgets(nome[i] , quantAlunos, stdin);
      scanf(" %s", nome[i]);
      printf("\n");
      for(int j=0; j<6; j++){
        printf("Insira a nota %d: ", j);
        scanf("%f", &notas[i][j]);
       // scanf("%c");
        printf("\n");
      }
    }

    for(int i=0; i<quantAlunos; i++){
      somaNotas=0;
      media=0;
      for(int j=0; j<6; j++){
       somaNotas+=notas[i][j]; 
      }
      media = somaNotas/6;
      if(media>=7){
        mediaAprovados[indiceAprovados] = media;
        nomeAprovados[indiceAprovados] = nome[i];
        quantAprovados++;
        indiceAprovados++;
      }
      else if(media>=5 && media<7){
        mediaRecuperacao[indiceRecuperacao] = media;
        nomeRecuperacao[indiceRecuperacao] = nome[i];
        quantRecuperacao++;
        indiceRecuperacao++;
      }
      else if(media<5){
        mediaReprovados[indiceReprovados] = media;
        nomeReprovados[indiceReprovados] = nome[i];
        quantReprovados++;
        indiceReprovados++;
      }
    }

    printf("\n");  
    printf("\n");
    printf("Imprimindo Os Alunos Aprovados");
    printf("\n");  
    printf("\n");

    for(int i=0; i<quantAprovados; i++){
      printf("Aluno: %s e sua media eh %.2f\n", nomeAprovados[i], mediaAprovados[i]);
    }

    printf("\n");  
    printf("\n");
    printf("Imprimindo Os Alunos em Recuperacao");
    printf("\n");  
    printf("\n");

    for(int i=0; i<quantRecuperacao; i++){
      printf("Aluno: %s e sua media eh %.2f\n", nomeRecuperacao[i], mediaRecuperacao[i]);
    }

    printf("\n");  
    printf("\n");
    printf("Imprimindo Os Alunos Reprovados");
    printf("\n");  
    printf("\n");

    for(int i=0; i<quantReprovados; i++){
      printf("Aluno: %s e sua media eh %.2f\n", nomeReprovados[i], mediaReprovados[i]);
    }

    printf("\n\n");
    printf("O Total de alunos Aprovados eh %d, o Total de Alunos em Recuperacao eh %d e o Total de Alunos Reprovados eh %d\n", quantAprovados, quantRecuperacao, quantReprovados);

    free(notas);
    free(nome);
    free(nomeAprovados);
    free(nomeRecuperacao);
    free(nomeReprovados);
    free(mediaAprovados);
    free(mediaRecuperacao);
    free(mediaReprovados);
}

