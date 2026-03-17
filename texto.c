#include <stdio.h>

int main() {
    char destino[20], origem[20],linha[100];
    int num_linha,i;
    scanf("%s %s %d", destino, origem, &num_linha);
    
 FILE *comeco;
 comeco = fopen(origem, "r");
 if(comeco == NULL){
     printf("Erro\n");
     return 1;
 }
 FILE *final;
 final = fopen(destino, "w");
 if(final == NULL){
     printf("Erro\n");
     return 1;
 }
 for(i=0;i<num_linha;i++){
     fgets(linha, 100, comeco);
 }
 
 fprintf(final, " %s", linha);
 
 fclose(comeco);
 fclose(final);
 

    return 0;
}