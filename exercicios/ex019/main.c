/**<
19. Faça um programa que peça ao usuário um número entre 12 e 20. Se a pessoa digitar um
número diferente, mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se
digitar correto mostrar o número digitado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    char resp;
    do{
        printf("\nDigite um numero entre 12 e 20 : ");
        scanf("%d", &numero);

        if (numero >= 12 && numero <= 20){
            printf("\nnumero digitado = %d\n", numero);
        }
        else{
            printf("\no numero digitado esta fora do intervalo !\n");
        }

    }while(numero < 12 || numero > 20 );
    return 0;
}
