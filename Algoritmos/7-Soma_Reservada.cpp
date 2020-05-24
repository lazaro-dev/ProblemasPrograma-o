#include<stdio.h>
#include<math.h>
int rev(int n){
	int aux=0;
	int valor = n,inv=0;
	while(n>0){
		n/=10;
		aux++;
	}	
	while(aux--){
		inv += valor%10 * pow(10,aux);
		valor/=10;
	}
	return inv;
}
int main(){
	int n=0,m=0;
	scanf("%d %d",&n,&m);
	printf("\n %d",rev(rev(n)+rev(m)));
	return 0;
}
