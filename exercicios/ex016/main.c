/**<
16. Escreva um programa que leia 10 n�meros e:
    a. Escreva o menor valor lido e o maior valor lido
    b. Some-os.
    c. Imprima sua m�dia.

 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int vet[10];
    for(int i = 0; i < 9; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
        soma = soma + vet[i];
    }

    int maior = vet[0];
    for (int i = 0; i < 9; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }
    }

    int menor = vet[0];
    for (int i = 0; i < 9; i++){
        if (vet[i] < menor){
            menor = vet[i];
        }
    }

    double media = (double)soma / 10;

    printf("maior valor = %d\n", maior);
    printf("menor valor = %d\n", menor);
    printf("soma = %d\n", soma);
    printf("media = %.2lf\n", media);

    return 0;
}
