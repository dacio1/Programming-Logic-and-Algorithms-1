#include<stdio.h>
int main(){
	int b;
	FILE *bin;
	bin=fopen("dic.liv","rb");
	if(bin==NULL){
		printf("Erro");
		return 1;
	}
	fread((void*)&b,sizeof(int),1,bin);
	printf("%d\n",b);
	system("pause");
	return 0;
}
