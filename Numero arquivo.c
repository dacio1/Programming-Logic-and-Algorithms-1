#include<stdio.h>
#include<stdlib.h>
int i;
int main(){
	FILE *num;
	num=fopen("dados.txt","w");
	for(i=1;i<101;i++){
	fprintf(num,"%d\n",i);
	}
	fclose(num);
	system("pause");
	return 0;
}
