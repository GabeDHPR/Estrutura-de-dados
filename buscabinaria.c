#include <stdio.h>
#include <stdlib.h>
    int main(){
    int N,B,i,esq,dir,meio,pos;
    scanf("%d %d", &N, &B);
    int lista[N];
    for(i=0;i<N;i++){
        scanf("%d", &lista[i]);
    }
    esq = 0;
    dir = N - 1;
    
    while(esq <= dir){
        meio = (esq + dir) / 2;
         
    if (lista[meio] == B){
        
        printf("%d", meio);
        return 0;
    }
    if(lista[meio] < B){
        esq = meio + 1;
    }else{
        dir = meio - 1;
    }
    }
    
    printf("-1");
    return 0;
}
