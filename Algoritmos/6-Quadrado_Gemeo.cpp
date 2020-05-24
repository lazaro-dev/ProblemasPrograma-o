#include<stdio.h>
#include<math.h>
int main(){
	long int n,a,valor;
	int teste=0,i=0;
	scanf("%ld",&n);
	valor = n;
	while(n>0){
		a+= n%10 * pow(10,i);
		n/=10;
		if(((int)pow((a+n),2))==valor){
			teste = 1;
		}else{
			i++;
		}
	}
	(teste)?printf("1\n"):printf("0\n");
}
