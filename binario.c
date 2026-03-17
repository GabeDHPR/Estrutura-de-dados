#include <stdio.h>

int main() {
    int n,v;
    scanf("%d", &n);
    FILE *f = fopen("numeros.bin", "rb");
    fseek(f,n*sizeof(int),SEEK_SET);
    fread(&v, sizeof(int),1,f);
    printf("O numero resultante é: %d\n");
    return 0;
}