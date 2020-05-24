#include <stdio.h>
#include <stdlib.h>
typedef struct lista Lista;
struct lista{
	int info;
	Lista* prox;
};
int vazia(Lista* l){
	return(l==NULL);
}
Lista* insereFinal(Lista* l,int item){
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->info = item;
	novo->prox = NULL;
	Lista* p = l;
	Lista* ant = NULL;
	if(vazia(p)){
		return novo;
	}else{
	
	while(p!=NULL){
		ant = p;
		p=p->prox;
	}
	ant->prox = novo;
	novo->prox = NULL;	
	return l;
	}
}
Lista* criar(){
	return NULL;
}
int main(){
	int n=0;
	Lista* lista1=criar();
	while(scanf("%d",&n),(n!=0)){
		if(n!=0){
			lista1 = insereFinal(lista1,(n+1));
		}
	}
	while(!vazia(lista1)){
		printf("%d\n",lista1->info);
		lista1 = lista1->prox;
	}
	return 0;
}
