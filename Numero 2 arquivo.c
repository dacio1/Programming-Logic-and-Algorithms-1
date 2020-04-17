#include<stdio.h>
#include<stdlib.h>
int i;
int main(){
	FILE *n;
	n=fopen("dados.txt","r");
	fscanf(n,"%d",&i);
	if(n==NULL){
	printf("\nERRO\n");
	return 1;
	}
	if(n==0){
	
	printf("%d\n",i);
}
	fclose(n);
	system("pause");
	return 0;
}
