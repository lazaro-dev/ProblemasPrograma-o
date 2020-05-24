#include<stdio.h>
#include<math.h>
int primo(int pri){
	int i,cont=0;
	for(i=1;i<=pri;i++){
		if(pri%i==0){
			cont++;
		}
	}
	if(cont==2){
		return 1;
	}else
		return 0;	
}
int main(){
	int i=2;
	int n=0;
	int vdd = 0;
	int p1=0,p2=0;	
	scanf("%d",&n);
	while((!vdd)&&(i<n)){
		p1 = primo(i);
		p2 = primo((n-i));
		if((p1==p2)&&(p1==1)){
			vdd = 1;
		}else{
			i++;
		}
	}
	printf("\n%d\n%d",i,(n-i));
	return 0;
}
