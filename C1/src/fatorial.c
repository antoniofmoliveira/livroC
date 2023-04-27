#include <stdio.h>
#include <stdlib.h>
#include "../include/fatorial.h"

int fatorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

void testa_fatorial(void)
{
    int x, y;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("X eh positivo\n");
        y = fatorial(x);
        printf("Fatorial de X eh %d\n", y);
    }
    else
    {
        if (x < 0)
            printf("X eh negativo\n");
        else
            printf("X eh Zero\n");
    }

    return 0;
}