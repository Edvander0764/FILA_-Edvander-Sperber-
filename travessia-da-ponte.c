#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include <locale.h>

int main()
{
    struct sfila filaCampos;
    struct sfila filaGuarus;
    setlocale(LC_ALL, "Portuguese");
    int selecao;

    qinit(&filaCampos);
    qinit(&filaGuarus);

    do
    {
        printf(">>>>>>>>>>>>>>>> MENU <<<<<<<<<<<<<<<<\n\n");
        printf("1 - Adicionar carro na fila de Campos.\n");
        printf("2 - Adicionar carro na fila de Guarus.\n");
        printf("3 - Ver quantos carros existem em ambas as filas.\n");
        printf("4 - Liberar carros para a travessia.\n");
        printf("5 - ENCERRAR PROGRAMA.\n\n");
        scanf("%d", &selecao);

        switch (selecao)
        { 
            case 1: 
                if (qisFull(&filaCampos) == 0)
                {
                    enqueue(&filaCampos,'C');
                    printf("\nCarro adicionado em Campos.\n\n");
                    sleep(2);
                    system("cls");
                }
                else 
                {
                    printf("\nFila de Campos cheia.\n\n");
                    sleep(2);
                    system("cls");
                }
            break;

            case 2: 
                if (qisFull(&filaGuarus) == 0)
                {
                    enqueue(&filaGuarus,'G');
                    printf("\nCarro adicionado em Guarus.\n\n");
                    sleep(2);
                    system("cls");
                }
                else 
                {
                    printf("\nFila de Guarus cheia.\n\n");
                    sleep(2);
                    system("cls");
                }
            break;

            case 3: 
            printf("\nNeste momente, existem %d carros na fila de Campos e %d na fila de Guarus.\n\n", count(&filaCampos), count(&filaGuarus));
            sleep(5);
            system("cls");
            break;

            case 4:
            printf("\nPonte liberada para a travessia.\n\n");
            sleep(2);
                if (qisEmpty(&filaCampos) == 0)
                {
                    dequeue(&filaCampos);
                    printf("\nCarro de Campos atravessando...\n\n");
                    sleep(5);
                }
                else 
                {
                    printf("\nFila de Campos vazia. Prosseguindo para a fila de Guarus.\n\n");
                    sleep(3);
                }
                if (qisEmpty(&filaGuarus) == 0)
                {
                    dequeue(&filaGuarus);
                    printf("\nCarro de Guarus atravessando...\n\n");
                    sleep(5);
                }
                else 
                {
                    printf("\nFila de Guarus vazia.\n\n");
                    sleep(3);
                }
            system("cls");
            break;

            case 5: 
            printf("\nPrograma encerrado.\n\n");
            break;

            default:
            printf("\nOpção não existente no menu. Tente novamente.\n\n");
            sleep(2);
            system("cls");
            break;
        }
    } 
    while (selecao != 5);
    
    return 0;
}