#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float av1[3], av2[3], av3[3], media[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Insira as notas AV1 e AV2 do aluno %d: ", i + 1);
        scanf("%f %f", &av1[i], &av2[i]);
        media[i] = (av1[i] + av2[i]) / 2;
        if (media[i] < 6) {
            printf("Insira a nota AV3 do aluno %d: ", i + 1);
            scanf("%f", &av3[i]);
            if (av1[i] < av2[i]) {
                media[i] = (av3[i] + av2[i]) / 2;
            } else {
                media[i] = (av1[i] + av3[i]) / 2;
            }
        }
    }

    for (i = 0; i < 3; i++) {
        if (media[i] >= 6) {
            printf("Aluno %d aprovado com média %.2f\n", i + 1, media[i]);
        } else {
            printf("Aluno %d reprovado com média %.2f\n", i + 1, media[i]);
        }
    }
    system("Pause");
    return 0;
}
