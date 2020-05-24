#include <stdio.h>
#include <math.h>
int perfeito(int j);
int main(){
	int j=0;
	int count=0;
	while(scanf("%d",&j),(j!=0)){
		if(perfeito(j))
			count++;
	}
	printf("%d",count);
	return 0;
}
int perfeito(int j){
	for(int i=2;i<=(j/2);i++){
		if(pow(i,2)==j)
			return 1;
	}
	return 0;
}
