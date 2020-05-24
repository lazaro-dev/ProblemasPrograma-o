#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int qtd = 0;
	int n=0;
	long soma=0;
	int i,h=0;
	scanf("%d",&qtd);
	h = qtd;
	for(i=0;i<qtd;i++){
		scanf("%d",&n);
		setbuf(stdin,NULL);
		if((1000>n)&&(n>-1000)){
			soma+=n;
		}else{
			h--;
		}
	}	
	printf("\n%.1f \n",(float)soma/h);	
	return 0;
}
