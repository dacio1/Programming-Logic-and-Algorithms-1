#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
       
char nome[100][100], n_maior[100];
int altura[100], i=0, j, maior_alt=0, qt_pessoas;

do{
    fflush(stdin);    
    printf("Informe Nome:");
    scanf("%s", nome[i]);
    qt_pessoas++;
    if(strcmp(nome[i],"fim")!=0){
                                 
    fflush(stdin);
    printf("Informe Altura:");
    scanf("%i", &altura[i]);
    }
    i++; 
                     }while(strcmp(nome[i-1],"fim")!=0);
maior_alt=altura[0];
qt_pessoas=qt_pessoas-1;    
      
      for(j=0;j<i-1;j++){

      if(altura[j]>maior_alt){
      maior_alt=altura[j];
      strcpy(n_maior,nome[j]);
      }
}
      printf("\nQuantidade de Pessoas: %i \n", qt_pessoas); 
      printf("\nMaior Altura: %i \n", maior_alt);
      printf("\nNome da pessoa mais alta: %s \n", n_maior);
 
system("pause");
}
