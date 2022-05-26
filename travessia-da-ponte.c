#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <locale.h>

int main()
{
    struct spilha ponte;
    setlocale(LC_ALL, "Portuguese");
    int selecao;

    do
    {
        printf("Escolha uma das opções do menu abaixo\n");
        scanf("%d", &selecao);

        switch (selecao)
        {
            case 1: /* constant-expression */
            printf("\n####\n");
            break;

            case 2: /* constant-expression */
            printf("\n#####\n");
            break;

            case 3: /* constant-expression */
            printf("\n####\n");
            break;

            case 4: /* constant-expression */
            printf("\n#####\n");
            break;
        
            default:
            printf("\n#######\n");
            break;
        }
    } 
    while (selecao >= 1);
    
    return 0;
}