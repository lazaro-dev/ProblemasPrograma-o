#include <stdio.h>
#include <string.h>
int teste(char carac){
	if(carac>='a'&&carac<='z'){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	char texto[250];
	int n=0,aux=0,y=0;
	int i=0;
	scanf("%d",&n);
	setbuf(stdin,NULL);
	gets(texto);
	setbuf(stdin,NULL);
	printf("%d\n",strlen(texto));
	for(i=0;i<=strlen(texto);i++){
		if(teste(texto[i])){
			aux++;
		}else{
			if(aux==n){
				y++;
			}	
			aux=0;
		}	 
	}
	printf("%d",y);
	return 0;
}
