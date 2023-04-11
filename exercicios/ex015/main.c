// aluno : Marcio Renan Rocha da Silva / matricula : 202208950035

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int x, y, z;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    printf("Digite outro numero: ");
    scanf("%d", &z);

    if(x > y && x > z){
        printf("Maior numero = %d\n", x);
    }
    else if ( y > x && y > z){
        printf("Maior numero = %d\n", y);
    }
    else {
        printf("Maior numero = %d\n", z);
    }
    
    if (x < y && x < z) {
       printf("Menor numero = %d\n", x);
    }
    else if (y < x && y < z){
        printf("Menor numero = %d\n", y); 
    }
    else {
         printf("Menor numero = %d\n", z);
    }

    return 0;
}
