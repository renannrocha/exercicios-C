/**<
 Criar um programa que receba 3 notas de 3 alunos. Caso o aluno não obtenha nota superior a
6 na média entre a duas notas AV1 e AV2, inserir nota AV3 e substituir a menor entre Av1 e
Av2, recalcular a média e mostrar o resultado da aprovação ou reprovação dos alunos.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int soma;
    float notaAluno_1[3];
    float notaAluno_2[3];
    float notaAluno_3[3];
    soma = 0;

    printf("Aluno 1\n");
    for(int i = 0; i < 2; i++){
        printf("digite a %d nota do primeiro aluno: ", i+1);
        scanf("%f", &notaAluno_1[i]);
        soma = soma + notaAluno_1[i];
    }

    for(int i = 0; i < 2; i++){
        printf("%.2f \n", notaAluno_1[i]);
    }


    system("Pause");
    return 0;
}
