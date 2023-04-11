#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float temp, convertF, convertC, convertK;
    int escalaFinal, escalaInicial;

    printf("\n_____________________________________________________\n");
    printf("|                      TABELA                       |\n");
    printf("|                                                   |\n");
    printf("| ( 1 = Fahrenheit ) ( 2 = Celsius ) ( 3 = Kelvin ) |\n");
    printf("|___________________________________________________|\n");

    printf("\nDigite a escala atual da temperatura: ");
    scanf("%d", &escalaInicial);

    printf("\nDigite escala para qual voce quer converter: ");
    scanf("%d", &escalaFinal);

    switch (escalaInicial)
    {
    case 1:
        printf("\nDigite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);

        switch(escalaFinal)
        {
        case 2:
            // C = (F − 32) / 1,8
            convertC = (temp - 32) / 1.8;
            printf("\nresultado = %.2fC\n", convertC);
            break;
        case 3:
            convertC = (temp- 32) / 1.8;
            convertK = convertC + 273.15;
            printf("\nresultado = %.2fK\n", convertK);
            break;
        default:
            printf("\nERRO!!\n");
        }
        break;

    case 2:
        printf("\nDigite a temperatura em Celsius: ");
        scanf("%f", &temp);

        switch(escalaFinal)
        {
        case 1:
            // F = C*(1,8) + 32
            convertF = (temp*(1.8)) + 32;
            printf("\nresultado = %.2fF\n", convertF);
            break;
        case 3:
            //K = C + 273,15
            convertK = temp + 273.15;
            printf("\nresultado = %.2fK\n", convertK);
            break;
        default:
            printf("\nERRO!!\n");
        }
        break;
    case 3:
        printf("\nDigite a temperatura em Kelvin: ");
        scanf("%f", &temp);

        switch(escalaFinal)
        {
        case 1:
            // F = 1,8(K-273) + 32
            convertF = (1.8*(temp-273)) + 32;
            printf("\nresultado = %.2fF\n", convertF);
            break;
        case 2:
            // C = K – 273,15
            convertC = temp - 273.15;
            printf("\nresultado = %.2fC\n", convertC);
            break;
        default:
            printf("\nERRO!!\n");
        }
        break;
    default:
        printf("\nERRO!!\n");
    }


    system("Pause");
    return 0;
}
