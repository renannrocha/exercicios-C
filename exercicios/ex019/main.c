/**<
19. Fa�a um programa que pe�a ao usu�rio um n�mero entre 12 e 20. Se a pessoa digitar um
n�mero diferente, mostrar a mensagem "entrada inv�lida" e solicitar o n�mero novamente. Se
digitar correto mostrar o n�mero digitado.
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
