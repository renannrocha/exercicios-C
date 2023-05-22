#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, posicao, maior, q[9];
    maior = q[0];

    for(i=0;i<=9;i++){
        printf("digite o %i. numero: ", i+1);
        scanf("%i", &q[i]);
    }

    for(i=0;i<=9;i++){
        if(q[i]<0){
            printf("ERRO - VALOR NEGATIVO");
        }
        else{
            if(q[i] > maior){
                maior = q[i];
                posicao = i+1;
            }
        }

    }

    printf("\nmaior numero: %i", maior);
    printf("\nposicao : %i", posicao);
    system("Pause");
    return 0;
}
