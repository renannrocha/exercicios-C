#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, soma;
    float media, notas[9];

    soma = 0;
    for(i=0; i <= 9; i++){
        printf("digite a %ia. nota: ", i+1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 10;
    printf("\n media = %.2f", media);
    system("Pause");
    return 0;
}
