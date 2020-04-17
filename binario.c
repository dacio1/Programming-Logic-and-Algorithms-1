#include<stdio.h>

int main(){
	int a=3;
	FILE *binario;
	binario=fopen("dic.liv","wb");
	if(binario==NULL){
	printf("Erro");
	return 1;
	}
	fwrite((void*)&a,sizeof(int),1,binario);
	fclose(binario);
	return 0;
}
