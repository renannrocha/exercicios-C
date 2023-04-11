#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char resp;
    int intervalo_inicio, intervalo_fim, valor, troca;
    do{
        printf("\nDigite um numero indicando o inicio do intervalo: ");
        scanf("%d", &intervalo_inicio);
        printf("Digite um numero indicando o fim do intervalo: ");
        scanf("%d", &intervalo_fim);

        if (intervalo_fim < intervalo_inicio){
            troca = intervalo_fim;
            intervalo_fim = intervalo_inicio;
            intervalo_inicio = troca;

        }

        if (intervalo_inicio == intervalo_fim){
            printf("erro ! valores iguais");
        }
        else{
            printf("Agora digite um valor : ");
            scanf("%d", &valor);
            if (valor >= intervalo_inicio && valor <= intervalo_fim ){
                printf("\n%d esta dentro do intervalo de %d a %d\n", valor, intervalo_inicio, intervalo_fim);
            }
            else{
                printf("\n%d não esta dentro do intervalo de %d a %d\n", valor, intervalo_inicio, intervalo_fim);
            }
        }

        printf("\nDeseja repetir {s/n}? ");
        scanf("%s", &resp);
    }while (resp == 's');


    system("Pause");
    return 0;
}
