/**<
Leia uma temperatura a qual o usuário irá o Valor e a escala atual: (Fahrenheit, Celsius, Kelvin)
e informar a escala para qual deseja converter.
a. Celsius para Fahrenheit: F = C*(1,8) + 32
b. Fahrenheit para Celsius: C = (F − 32) / 1,8
c. Kelvin para Celsius: C = K – 273,15
d. Celsius para Kelvin: K = C + 273,15
e. Kelvin para Fahrenheit: F = 1,8(K-273) + 32

 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double temperatura, convertC, convertF, convertK;
    char resp;
    char escalaInicial;
    char escalaFinal;

    convertC = 0;
    convertF = 0;
    convertK  = 0;
    printf("\n######################\n\n       TABELA\n    (f - Fahrenheit)\n    (c - Celsius)\n    (k - Kelvin)\n\n######################\n");
    printf("\nDigite a escala atual (f/c/k): ");
    scanf("%c", &escalaInicial);


    if(escalaInicial == 'f'){
        printf("Digite a temperatura atual: ");
        scanf("%lf", &temperatura);
        printf("\nDigite escala a qual você deseja converter (c/k): ");
        scanf("%c", &escalaFinal);

        switch (escalaFinal){
            case 'c':
                convertC = (temperatura − 32) / 1.8;
                printf("%.2lf° em Celsius = %.2lf", temperatura, convertC);
                break;
            case 'k':
                convertC = temperatura − 32 / 1.8;
                convertK = convertC + 273,15;
                printf("%.2lf° em Kelvin = %.2lf", temperatura, convertK);
                break;
            default:
                printf("erro !!");
        }
    }
    else if(escalaInicial == 'c'){
        printf("Digite a temperatura atual: ");
        scanf("%lf", &temperatura);
        printf("\nDigite escala a qual você deseja converter (f/k): ");
        scanf("%c", &escalaFinal);

        switch (escalaFinal){
            case 'f':
                //F = C*(1,8) + 32
                convertF = temperatura*(1.8) + 32;
                printf("%.2lf° em Fahrenheit = %.2lf", temperatura, convertF);
                printf("");
                break;
            case 'k':
                // K = C + 273,15
                convertK = temperatura + 273.15;
                printf("%.2lf° em Kelvin = %.2lf", temperatura, convertK);
                break;
            default:
                printf("erro !!");
        }
    }
    else if(escalaInicial == 'k'){
       printf("Digite a temperatura atual: ");
        scanf("%lf", &temperatura);
        printf("\nDigite escala a qual você deseja converter (f/c): ");
        scanf("%c", &escalaFinal);

        switch (escalaFinal){
            case 'f':
                // F = 1,8(K-273) + 32
                convertF = 1.8*(temperatura - 273) + 32;
                printf("%.2lf° em Fahrenheit = %.2lf", temperatura, convertF);
                break;
            case 'c':
                // C = K – 273,15
                convertC = temperatura - 273.15;
                printf("%.2lf° em Celsius = %.2lf", temperatura, convertC)
                break;
            default:
                printf("erro !!");
        }
    }
    else{
        printf("erro !!");
    }

    system("Pause");
    return 0;
}
