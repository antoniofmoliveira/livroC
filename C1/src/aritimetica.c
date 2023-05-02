#include <stdlib.h>
#include <stdio.h>
#include "../include/aritimetica.h"

int soma(int a, int b)
{
    return a + b;
}
int subtracao(int a, int b)
{
    return a - b;
}
int produto(int a, int b)
{
    return a * b;
}
int divisao(int a, int b)
{
    return a / b;
}

void testa_aritimetica(void)
{
    int x, y, z;
    char ch;
    setbuf(stdin, NULL); // apenas para limpar buffer

    printf("Digite uma operacao matematica (+,-,*,/): ");
    scanf("%c", &ch);
    printf("Digite 2 numeros: ");
    scanf("%d %d", &x, &y);
    switch (ch)
    {
    case '+':
        z = soma(x, y);
        break;
    case '-':
        z = subtracao(x, y);
        break;
    case '*':
        z = produto(x, y);
        break;
    case '/':
        z = divisao(x, y);
        break;
    default:
        z = soma(x, y);
    }
    printf("Resultado = %d\n", z);
}