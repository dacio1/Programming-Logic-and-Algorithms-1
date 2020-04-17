#include<stdio.h>
#include<stdlib.h>
struct concurso{
char nome[30];
float alt;
int idade;
float nota;
};
int i=0,op=1;
int maior=0;
typedef struct concurso concurso;
int main(){
concurso c;
FILE *con;
con=fopen("concurso.txt","w");
while(op){
printf("\nDigite o nome do candidato:\n");
scanf("%s",c.nome);
printf("\nDigite a altura do candidato:\n");
scanf("%f",&c.alt);
printf("\nDigite a idade do candidato:\n");
scanf("%i",&c.idade);
printf("\nDigite a nota do candidato:\n");
scanf("%f",&c.nota);
printf("\nDigite 1 pra cadastrar mais pessoas:\n");
scanf("%i",&op);
i++;
fprintf(con,"%s\n",c.nome);
fprintf(con,"%.2f\n",c.alt);
fprintf(con,"%i\n",c.idade);
fprintf(con,"%.2f\n",c.nota);
}
FILE *saida;
saida=fopen("concurso.txt","r");
while(!feof(saida)){
fscanf(saida,"%s",c.nome);
fscanf(saida,"%f",c.alt);
fscanf(saida,"%i",c.idade);
fscanf(saida,"%f",c.nota);
if(c.alt>maior){
printf("pessoa mais alta:%s\n",c.nome);
}
if(c.idade>18){
printf("pessoa com mais de 18 anos:%s\n",c.nome);
}
}
fclose(con);
system("pause");
return 0;
}
