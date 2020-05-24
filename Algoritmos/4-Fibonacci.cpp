#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=0,n=0;
	scanf("%d",&n);
	int vet[n];
	if(n>1){
		vet[0] = 0;
		vet[1] = 1;
		for(i=2;i<n;i++){
			vet[i] = vet[i-1] + vet[i-2];	
		}
		for(i=0;i<n;i++){
			printf("%d\n",vet[i]);	
		}
	}else{
		printf("\n0\n");	
	}
	return 0;
}
