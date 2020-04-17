#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int op;
while(op!=3){
printf("\nDigite sua opcao:\n");
printf("1-cadastro 2-consulta 3 sair\n");
scanf("%i",&op);
switch(op){
case 1:cadastro();
break;

}
}

cadastro(){
	struct aluno{
char nome[30];
float no1;
float n2;
};
	struct aluno aluno;
	int i=0;
	int o=1;
FILE *alu;
while(o==1){
alu=fopen("notas.txt","w");
printf("\nDigite o nome do aluno:\n");
fflush(stdin);
gets(aluno.nome);
printf("\nDigite sua primeira nota:\n");
scanf("%f",&aluno.no1);
printf("\nSua segunda nota:\n");
scanf("%f",&aluno.n2);
fprintf(alu,"%s\n",aluno.nome);
fprintf(alu,"%.2f\n",aluno.no1);
fprintf(alu,"%.2f\n",aluno.n2);
printf("\nDigite 1 pra cadastrar mais:\n");
scanf("%i",&o);
}
fclose(alu);
}
system("pause");
return 0;
}
