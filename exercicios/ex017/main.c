// aluno : Marcio Renan / matricula : 202208950035
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int x, valor, divisores;
    printf("digite um numero: ");
    scanf("%d", &x);
    
    valor = 1;
    divisores = 0;
    if(x > 0){
      while(valor <= x){
          if(x % valor == 0){
              divisores++;
          } 
          valor++;
      } 
      if (divisores == 2){
          printf("%d é um numero primo", x);
      }
      else {
          printf("%d não é um numero primo", x);
      }
    }
    else{
        printf(" Valor negativo ou igual a zero !!");
    }

    return 0;
}
