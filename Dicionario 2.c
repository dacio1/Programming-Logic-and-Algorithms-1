#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Dicionario{
char portugues[100];
char ingles[100];
};

int main(){
struct Dicionario dicionario[30];
FILE *arquivo;
int numpalavras=0;
char palavra[100];
int i;
arquivo=fopen("dic.txt","r");
if(arquivo ==NULL){
printf("Erro ao abrir arquivo\n");
return 1;
}
while(!feof(arquivo)){
fscanf(arquivo,"%s\n",dicionario[numpalavras].ingles);
fscanf(arquivo,"%s\n",dicionario[numpalavras].portugues);
numpalavras++;
}
printf("Digite uma palavra para traduzir:");
scanf("%s",palavra);
for(i=0;i<numpalavras;i++){
if(strcmp(palavra,dicionario[i].ingles)==0){
printf("%s\n",dicionario[i].portugues);
break;
}
}
if(i==numpalavras){
printf("Nao existe a palavra no dicionario");
}
fclose(arquivo);
system("pause");
return 0;
}
