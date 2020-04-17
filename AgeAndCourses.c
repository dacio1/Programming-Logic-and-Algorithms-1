// VETOR, WHILE E DO...WHILE
//Faça um programa para uma universidade com N alunos. 
//Cada um digite código curso(1-Sistemas e 2-Administração). E a idade.
//a) número de alunos com idade entre 20 e 25;
//b) a maior média de idade;
//c) a menor média de idade.

#include <stdio.h>
#include <string.h>

char op[10];
int cod[2], c, contcod;
int id[150], i, contId, idSIS=0, idADM=0;
int somaIdSIS=0, somaIdADM=0;
int MaId, MeId;
int sis, adm;
int maiorM=0, menorM=0;
float medSIS=0, medADM=0;
float maidall, meidall;

main(){
       c=0;
       
       
       
       do{
       puts("Digite o codigo de seu curso: \n");
       puts("1- Sistemas e 2- Administracao\n");
       fflush(stdin);
       scanf("%i",&cod[c]);
       puts("Digite a sua idade: \n");
       fflush(stdin);
       scanf("%i",&id[c]);
       c++;
       puts("Digite SAIR para finalizar \n");
       fflush(stdin);
       gets(op);
       }while(strcmp(strupr(op),"SAIR")!=0);
       contId=0;
       MaId=id[0];
       MeId=id[0];
       
       
       for(i=0;i<c;i++){
                        
       if((id[i] >= 20) && (id[i] <= 25)){
       contId++;
       }
                       
       if(cod[i]==1){   
       somaIdSIS=somaIdSIS+id[i];
       idSIS++;
       }
       if(cod[i]==2){
       somaIdADM=somaIdADM+id[i];
       idADM++;
       }
       
       
       if(id[i]  >  MaId){
       MaId=id[i];
       maidall=cod[i];
       }
       if(id[i] < MeId ){
       MeId=id[i];
       meidall=cod[i];
       }
            
       }//Fim de for
      
       medADM=somaIdADM/idADM;
       medSIS=somaIdSIS/idSIS;
       
       for(i=0;i<c;i++){
       printf("Codigo do curso: %i, Idade: %i\n", cod[i], id[i]);
       }
       
       
       printf("Numero de alunos entre 20 e 25 anos: %i \n", contId);
       printf("Maior idade de todas: %i, Codigo: %i \n", MaId, maidall);
       printf("Menor idade de todas: %i, Codigo: %i \n", MeId, meidall);
       if(medSIS>medADM)
       printf("Maior media: Curso de sistemas: %i \n",medSIS);
       else
       printf("Maior media: Curso de ADM: %i \n",medADM);
       
      system("pause");
       }
       
       
       
       
       
       
       
       
       
       
       
       
