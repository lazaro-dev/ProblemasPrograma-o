#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int qtd = 0;
	int n=0;
	long soma=0,somaI=0,somaP=0;
	int i;
	scanf("%d",&qtd);
	
	for(i=0;i<qtd;i++){
		scanf("%d",&n);
		setbuf(stdin,NULL);
		soma+=n;
		if((n%2)==0){
			somaP+= n;
		}else{
			somaI+= n;
		}
	}
	printf("\n%d\n%X\n%o\n",soma,somaP,somaI);
	return 0;
}
