#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x[9];

    for (i = 0 ; i <= 9; i++){
        printf("digite o %i.valor: ", i+1);
        scanf("%i", &x[i]);
    }

    for(i = 9 ; i >= 0 ; i--){
        printf(x[i]);
    }

    system("Pause");
    return 0;
}
