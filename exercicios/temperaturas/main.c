#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/**<
a. Celsius para Fahrenheit: F = C*(1,8) + 32
b. Fahrenheit para Celsius: C = (F − 32) / 1,8
c. Kelvin para Celsius: C = K – 273,15
d. Celsius para Kelvin: K = C + 273,15
e. Kelvin para Fahrenheit: F = 1,8(K-273) + 32
 */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float temp, convertF, convertC, convertK;
    int escalaInicial, escalaFinal;

    printf("\n################################\n\n");
    printf("            TABELA\n");
    printf("        ( 1 - Fahrenheit)\n");
    printf("        ( 2 - Celsius)\n");
    printf("        ( 3 - Kelvin )\n");
    printf("\n################################\n");

    printf("\nDigite a escala atual (1/2/3): ");
    scanf("%d", &escalaInicial);
    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (escalaInicial){
    case 1:
        printf("para qual escala voce quer converter ? (2/3) ");
        scanf("%i", &escalaFinal);

        switch(escalaFinal){
        case 2:
            // C = (F − 32) / 1,8
            convertC = (escalaFinal - 32) / 1.8;
            printf("resultado = %.2f", convertC);
            break;
        case 3:
            convertC = (escalaFinal - 32) / 1.8;
            convertC = convertC + 273.15;
            break;
        default:
            printf("ERRO!!\n");
        }
        break;
    case 2:
        printf("para qual escala você quer converter ? (2/3) ");
        scanf("%d", &escalaFinal);

        switch(escalaFinal)
        {
        case 1:
            break;
        case 3:
            break;
        default:
            printf("ERRO!!\n");
        }
        break;
    case 3:
        printf("para qual escala você quer converter ? (2/3) ");
        scanf("%d", &escalaFinal);

        switch(escalaFinal)
        {
        case 1:
            break;
        case 3:
            break;
        default:
            printf("ERRO!!\n");
        }
        break;
    default:
        printf("ERRO!!");
    }

    return 0;
}
