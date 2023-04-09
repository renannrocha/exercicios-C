#include <stdio.h>

int main()
{
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);

    if (x % 1 == 0 && x > 1){
        printf("Numero primo");
    }
    else{
        printf("Não é numero primo");
    }

    return 0;
}
