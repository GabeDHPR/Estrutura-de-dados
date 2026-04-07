#include <stdio.h>

void insertionSort(int vet[], int n);

int main(){
	int n,i;
	scanf("%d", &n);
	int k[n];
	for(i=0;i<n;i++){
		scanf("%d", &k[i]);
	}
	insertionSort(k,n);
	for(i=0;i<n;i++){
		printf("%d\n", k[i]);
	}
}

void insertionSort(int vet[], int n){
	int i;
	for(i=0;i<n;i++){
		int chave = vet [i];
		int j = i - 1;
		while(j >= 0 && vet[j] > chave){
			vet[j+1] = vet[j];
			j = j - 1;
			vet[j-1] = chave;
		}
	}
}
