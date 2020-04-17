#include<stdio.h>
#include<stdlib.h>
struct aluno{
char nome[30];
int idade;
char cpf[15];
};
typedef struct aluno aluno;
int main(){
FILE *entrada;
aluno a;
entrada=fopen("alunos.txt","r");
if(entrada==NULL){
printf("\nErro ao abrir arquivo\n");
return 1;
}
while(!feof(entrada)){
fscanf(entrada,"%s\n",a.nome);
fscanf(entrada,"%i\n",&a.idade);
fscanf(entrada,"%s\n",a.cpf);
if(a.idade>18){
printf("%s",a.nome);
}
}
fclose(entrada);
return 0;
}
