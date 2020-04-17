#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct aluno{
char no[30];
float n1;
float n2;
float media;
}aluno;
aluno a;
int i,op=1;
float media;
int main(){
	FILE *saida;
    saida=fopen("notas.txt","w");
    if(saida==NULL){
    printf("\nERRO\n");
    return 1;
    }
	while(op==1){
	printf("\nDigite o nome:\n");
	fflush(stdin);
	scanf("%s",a.no);
	printf("\nDigite a primeira nota:\n");
	fflush(stdin);
	scanf("%f",&a.n1);
	printf("\nDigite a segunda nota:\n");
	fflush(stdin);
	scanf("%f",&a.n2);
	a.media=(a.n1+a.n2)/2;
	fprintf(saida,"%s\n",a.no);
	fprintf(saida,"%.2f\n",a.n1);
	fprintf(saida,"%.2f\n",a.n2);
	fprintf(saida,"%.2f\n",a.media);
	printf("\nDigite 1 pra continuar:\n");
	fflush(stdin);
	scanf("%i",&op);
	
	}
	fclose(saida);
	system("pause");
	return 0;
}
