#include <stdio.h>

int notas[4], n;
float media=0;
main(){
       for(n=0;n<4;n++){
       printf("Digite a nota %i: \n", n+1);
       scanf("%i",&notas[n]);
       }
       
       for(n=0;n<4;n++){
       media=media+(float)notas[n];
       }
       printf("Media das 4 notas: %.2f \n", media/4);
       for(n=0;n<4;n++){
       printf("Notas: %i \n", notas[n]);
       }
       system("pause");
       }
       
