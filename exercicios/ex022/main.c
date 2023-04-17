/**<
 Criar um programa que receba 3 notas de 3 alunos. Caso o aluno n�o obtenha nota superior a
6 na m�dia entre a duas notas AV1 e AV2, inserir nota AV3 e substituir a menor entre Av1 e
Av2, recalcular a m�dia e mostrar o resultado da aprova��o ou reprova��o dos alunos.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float soma, media1, media2, menorNota;
    float notaAluno[2];
    int i;

    i = 0;
    do{
        soma = 0;
        media1 = 0;
        media2 = 0;
        menorNota = 0;

        printf("Aluno %d\n", i+1);

        // imput
        for(int n = 0; n < 3; n++)
        {
            printf("Digite a nota AV%d: ", n+1);
            scanf("%f", &notaAluno[n]);
            printf("%.2f ", notaAluno[n]);
        }
        printf("\n");

        soma = notaAluno[0] + notaAluno[1];
        media1 = soma / 2.0;

        // menor nota
        if(notaAluno[0] < notaAluno[1] && notaAluno[0] < notaAluno[2]){
            menorNota = notaAluno[0];
        }
        else{
            menorNota = notaAluno[1];
        }

        if( media1 >= 6.0 ){
            printf("media = %.1f - (APROVADO\n", media1);
        }
        else{
            soma = soma - menorNota;
            soma =  soma + notaAluno[2];
            media2 = soma / 2.0;
        }

        if(media2 >= 6.0){
            printf("media = %.1f - (APROVADO)\n", media2);
        }
        else{
            printf("media = %.1f - (REPROVADO)\n", media2);
        }

        printf("menor nota = %.2f\n", menorNota);
        printf("soma = %.2f\n\n", soma);
        i++;
    }while(i < 3);


system("Pause");
return 0;
}
