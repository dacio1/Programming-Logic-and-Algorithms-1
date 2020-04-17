#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=0;
	char c,s[30];
	FILE *t;
	t=fopen("tex.txt","r");
	if(t==NULL){
	printf("Erro ao abrir arquivo\n");
	return 1;
	}
	while(!feof(t)){
	fscanf(t,"%s",s[i]);
	printf("%s",s[i]);
	i++;
	}
	fclose(t);
	printf("O numero de carecteres eh:%d\n",i);
	system("pause");
	return 0;
}
