#include<stdio.h>

main(){
       int x,n,vetor[6];
       for(x=0;x<6;x++){
       printf("Digite um numero: ");
       scanf("%i", &vetor[x]);
       }
       printf("Vetor Completo: \n");
       for(x=0;x<6;x++){
       printf("%i\n", vetor[x]);
       }
       printf("Numeros pares: \n");
       for(n=0;n<6;n++){
       if(vetor[n]%2==0){
       vetor[n]=vetor[n];
       printf("%i\n", vetor[n]);
       }
       }
       printf("Numeros impares: \n");
       for(n=0;n<6;n++){
       if(vetor[n]%2==1){
       vetor[n]=vetor[n];
       printf("%i\n", vetor[n]);
       }
       }
       getch();
       }
