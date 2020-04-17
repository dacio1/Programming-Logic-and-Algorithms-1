#include<stdio.h>
#include<stdlib.h>
struct aluno{
char nome[30];
int idade;
char cpf[15];
};
typedef struct aluno aluno;
int main(){
	int op=0;
	aluno a;
	FILE *saida;
	saida=fopen("alunos.txt","w");
	if(saida==NULL){
	printf("\nErro ao abrir arquivo\n");
	return 1;
	}
	while(op==0){
	printf("\nDigite o nome:\n");
	scanf("%s",a.nome);
	printf("\nDigite a idade:\n");
	scanf("%i",&a.idade);
	printf("\nDigite o cpf:\n");
	scanf("%s",a.cpf);
	fprintf(saida,"%s\n",a.nome);
	fprintf(saida,"%d\n",a.idade);
	fprintf(saida,"%s\n",a.cpf);
	printf("\nDigite 1 para sair e 0 para continuar:\n");
	scanf("%i",&op);
	}
	fclose(saida);
	return 0;

}
