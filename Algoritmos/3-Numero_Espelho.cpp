#include<stdio.h>
#include<math.h>
int main(){
	int i=0;
	int n=0;
	int esp=0;
	scanf("%X",&n);
	n = (int)n;
	int comp = n;
	while(n>0){
		esp+= (n%10) * pow(10,i);
		n = n/10;
		i++;
	}
	if(comp==esp){
		printf("\nS\n");
	}else{
		printf("\nN\n");
	}
	return 0;
}
