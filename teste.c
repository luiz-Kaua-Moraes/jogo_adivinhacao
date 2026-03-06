#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int numero_computador;
    int numero_usuario = 0;
    int tentativas = 0;

    // computador escolhe um número de 1 a 100
    srand(time(0));
    numero_computador = rand() % 100 + 1;

    /*Executa enquanto o numero do usuário for diferente do computador*/
    while (numero_usuario != numero_computador)
    {
        tentativas++;
        printf("Informe um número de 1 a 100: ");
        scanf("%d", &numero_usuario);

        // impedi o usuário de inserir um número além do intervalo de 1 a 100
        if (numero_usuario < 1 || numero_usuario > 100)
        {
            printf("Número inválido! Você deve informar um número de 1 a 100\n");
            continue;
        }

        if (numero_usuario < numero_computador)
        {
            printf("O numero que o computador escolheu é maior\n");
        }
        else if (numero_usuario > numero_computador)
        {
            printf("O número que o computador escolheu é menor\n");
        }
        else
        {
            printf("Parabéns o número era %d\n", numero_computador);
        }
    }
    printf("Tentativas: %d", tentativas);
}
