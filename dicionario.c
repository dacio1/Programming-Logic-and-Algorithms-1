#include<stdio.h>
#include<stdlib.h>
struct di{
	char por[30];
	char in[30];
};
typedef struct di di;
int main(){
	di b;
	FILE *entrada;
	entrada=fopen("dic.txt","r");
	if(entrada==NULL){
	printf("ERRO");
	return 1;
	}
	printf("\nDigite a palavra em ingles:\n");
	scanf("%s",b.in);
	while(!feof(entrada)){
	fscanf(entrada,"%s",b.in);
	if(b.in==0){
	printf("\n%s\n",b.por);
	}
	}
	fclose(entrada);
	system("pause");
	return 0;
}
