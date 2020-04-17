#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    char c, str[30];
    int i = 0;

    /* Le um nome para o arquivo a ser aberto: */
    printf("Entre com um nome para o arquivo:\n");
    gets(str);

    /* Abre para leitura */

    if (!(p = fopen(str,"r"))) 
		/* Caso ocorra algum erro na abertura do arquivo..*/
    {   /* o programa aborta automaticamente */
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
    }

    c = getc(p); /* Le um caracter no arquivo */
    while (!feof(p)) /* Enquanto não se chegar no final do arquivo */
    {
		printf("Caracter %c, %d = %d\n", c, c, i);
        i++;                 /* E incrementa i */
        c = getc(p); /* Le um caracter no arquivo */
    }

    fclose(p); /* Fecha o arquivo */
    printf("O numero de caracteres do arquivo %s e' igual a %d\n", str, i);
return 0;
}


