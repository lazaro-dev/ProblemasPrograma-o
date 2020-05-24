#include<stdio.h>
#include<stdlib.h>
void quickSort(int *v, int esq, int dir);
int main(){
	int n=0,i=0,j=0;
	int v[5];
	scanf("%d",&n);
	setbuf(stdin,NULL);
	int mat[n][5];
	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
			scanf("%d",&mat[i][j]);
			setbuf(stdin,NULL);
			v[j]=mat[i][j];
		}
		quickSort(mat[i],0,4);
	}
	i=0;
	while(i<n){
		for(j=0;j<5;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
		if(i+1<n){
			i++;
			for(j=4;j>=0;j--)
				printf("%d ",mat[i][j]);
		}
		printf("\n");
		i++;
	}
	return 0;
}
void quickSort(int *v, int esq, int dir){
	int i, j, pivo, temp;
	pivo = v[(esq + dir)/2];
	i = esq;
	j = dir;
	do{
		//procura elementos maiores que o pivô na primeira partição
		while(v[i] < pivo && i < dir){
			i++;
		}
		//procura elementos menores que o pivô na primeira partição
		while(v[j] > pivo && j > esq){
			j--;
		}
		if(i <= j){
			temp = v[i];
			v[i] = v[j];
			v[j] = temp;
			i++;
			j--;
		}
	}while(i<=j);
	if(j > esq){
		quickSort(v,esq,j);
	}
	if(i < dir){
		quickSort(v,i,dir);
	}
}
