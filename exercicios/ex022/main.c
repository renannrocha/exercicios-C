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
    float soma, media, menorNota;
    float notaAluno1[3];
    float notaAluno2[3];
    float notaAluno3[3];

    printf("\nALUNO 1\n");
    for(int i = 0; i < 3; i++){
        printf("Digite AV%d: ", i+1);
        scanf("%f", &notaAluno1[i]);
    }
    soma = notaAluno1[1] + notaAluno1[2];
    media = soma / 2;
    printf("media AV1, AV2: %.2f\n", media);

    menorNota = notaAluno1[0];
    for(int i = 0; i < 3; i++){
        if (notaAluno1[i] < menorNota){
            menorNota = notaAluno1[i];
        }
    }

    if(media < 6.0){
       soma = soma - menorNota;
       soma = soma + notaAluno1[3];
       media = soma / 2;
       if(media > 6.0){
            printf("media : %.2f  - Aprovado\n", media);
       }
       else{
            printf("media : %.2f  - Reprovado\n", media);
       }
    }
    else{
        printf("APROVADO\n");
    }

    printf("soma : %.2f\n", soma);
    printf("menor nota : %.2f\n", menorNota);


    system("Pause");
    return 0;
}
