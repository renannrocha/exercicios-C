// aluno: Marcio Renan / Matricula : 202208950035

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade, soma, cont, maior, menor;
    float mediaIdades;
    soma = 0;
    cont = 0;

    printf("digite a idade da %dpessoa : ", cont+1);
    scanf("%d", &idade);

    maior = idade;
    menor = idade;
    while(idade != 0){
      cont = cont + 1;

      if(idade > maior){
         maior = idade;
      }

      if(idade < menor){
         menor = idade;
      }
      soma = soma + idade;

      printf("digite a idade da %dpessoa : ", cont+1);
      scanf("%d", &idade);
    }
    mediaIdades = (float)soma / cont;

    printf("\nNumero de Pessoas = %d\n", cont);
    printf("Idade média = %.2f\n", mediaIdades);
    printf("Maior idade = %d\n", maior);
    printf("Menor idade = %d\n", menor);

    system("Pause");
    return 0;
}
