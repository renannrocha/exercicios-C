// aluno : Marcio Renan / matricula: 202208950035

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    do{
        printf("\nDigite um numero entre 12 e 20 : ");
        scanf("%d", &numero);

        if (numero >= 12 && numero <= 20){
            printf("\nnumero digitado = %d\n", numero);
        }
        else{
            printf("\no numero digitado esta fora do intervalo !\n");
        }
    }while(numero < 12 || numero > 20);
    return 0;
}
