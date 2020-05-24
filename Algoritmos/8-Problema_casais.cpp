#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int imp=0,par=0,aux=0;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&aux);
		setbuf(stdin,NULL);
		if(aux%2==0){
			par++;
		}else{
			imp++;
		}
		n--;
	}
	(imp==par)?printf("S\n"):printf("N\n");
	return 0;
}
