#include <stdio.h>

#include "../include/exercicios.h"

void exerc5_1(void)
{
    int n = 0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
        printf(" %d", i);
    printf("\n");
}
void exerc5_2(void)
{
    int n = 0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
        printf(" %d", i);
    printf("\n");
}

void exerc5_3(void)
{
    int n = 0, c = 1;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf(" %d", c);
        c = c + 2;
    }
    printf("\n");
}

void exerc5_4(void)
{
    printf("Os cinco primeiros múltiplos de 3 são: ");
    for (int i = 1; i <= 5; i++)
        printf(" %d", i * 3);
    printf("\n");
}

void exerc5_5(void)
{
    printf("Os cinquenta primeiros números pares são: ");
    int c = 0;
    for (int i = 0; i <= 50; i++)
    {
        printf(" %d", c);
        c = c + 2;
    }
    printf("\n");
}

void exerc5_6(void)
{
    printf("Contagem regressiva: ");
    for (int i = 10; i >= 0; i--)
        printf(" %d", i);
    printf(" FIM!\n");
}

void exerc5_7(void)
{
    int n = 0, o = 0;
    printf("Informe 10 valores: \n");
    for (int i = 0; i < 10; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &n);
        o = o + n;
    }
    printf("a soma é %d.\n", o);
}

void exerc5_8(void)
{
    int n = 0;
    float o = 0.0;
    printf("Informe 10 valores: \n");
    for (int i = 0; i < 10; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &n);
        float p = n;
        o = o + p;
    }
    printf("a média é %f.\n", o / 10.0);
}

void exerc5_9(void)
{
    int n = 0, ma, me;
    printf("Informe 10 valores: \n");
    for (int i = 0; i < 10; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &n);
        if (i == 0)
        {
            ma = n;
            me = n;
        }
        else
        {
            if (n > ma)
                ma = n;
            if (n < me)
                me = n;
        }
    }
    printf(" o maior número foi %d.\n", ma);
    printf(" o menor número foi %d.\n", me);
}

void exerc5_10(void)
{
    int n = 0, i = 0;
    float o = 0.0;
    printf("Informe 10 valores positivos: \n");
    while (i < 10)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &n);
        if (n < 0)
            continue;
        float p = n;
        o = o + p;
        i++;
    }
    printf("a média é %f.\n", o / 10.0);
}

void exerc5_11(void)
{
    int n = 0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    printf(" os divisores são: ");
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf(" %d", i);
    printf("\n");
}

void exerc5_12(void)
{
    int n = 0, o = 0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    printf(" a soma dos divisores de %d é: ", n);
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            o = o + i;
    printf("%d.\n", o);
}

void exerc5_13(void)
{
    int o = 0;
    for (int i = 0; i < 1000; i++)
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            printf(" %d", i);
            o = o + i;
        }
    printf("\nA soma dos numeros naturais divisíveis por 3 ou 5 abaixo de 1000 é %d.\n", o);
}

void exerc5_14(void)
{
    int ant = 0, atu = 1, n = 0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    if (n == 0)
        atu = 0;
    else if (n == 1)
        atu = 1;
    else
        for (int i = 2; i <= n; i++)
        {
            int prv = atu;
            atu = atu + ant;
            ant = prv;
        }
    printf(" a posição %d a sequencia de Fibonacci é %d\n", n, atu);
}

void exerc5_15(void)
{
    int n = 0, i = 0, ma, me;
    printf("Informe valores positivos pu um negativo para encerrar: \n");
    do
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &n);
        if (n < 0)
            break;
        if (i++ == 0)
        {
            ma = n;
            me = n;
        }
        else
        {
            if (n > ma)
                ma = n;
            if (n < me)
                me = n;
        }
    } while (n >= 0);
    printf(" o maior número foi %d.\n", ma);
    printf(" o menor número foi %d.\n", me);
}

void exerc5_16(void)
{
    float har = 1.0;
    int n = 0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    if (n != 1)
        for (int i = 2; i <= n; i++)
        {
            float o = i;
            har = har + (1.0 / o);
        }
    printf(" Hn(%d) é %f.\n", n, har);
}

void exerc5_17(void)
{
    int n = 0, c = 1, i = 1;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    printf("este é o triangulo de Floyd para %d:\n", n);
    while (c <= n)
    {
        for (int j = 0; j < c; j++)
            printf(" %d", i++);
        c = c + 1;
        printf("\n");
    }
}

void exerc5_18(void)
{
    int n = 0, c = 0;
    printf("Informe um número inteiro positivo maior que 1: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Número deve ser maior que 1.\n");
        return 0;
    }
    for (int i = 2; i <= (n / 2); i++)
        if (n % i == 0)
            c++;
    if (c == 0)
        printf(" %d é numero primo.\n");
    else
        printf(" %d não é numero primo.\n");
}

void exerc5_19(void)
{
    float n = 0.0, o = 1.0, p = 0.0;
    for (int i = 1; i <= 55; i++)
    {
        float q = i;
        p = p + (o / q);
        printf("(%f, %f), ", o, q);
        o = o + 2.0;
    }
    printf("S = %f", p);
}

int fat(int n)
{
    int o = 1;
    for (int i = 1; i <= n; i++)
        o = o * i;
    return o;
}
void exerc5_20(void)
{
    int n = 0;
    float o = 0.0;
    printf("Informe um número inteiro positivo maior que 1: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        float p = fat(i);
        o = o + (1.0 / p);
        printf(" fat(%d) = %f.\n", i, p);
    }
    printf(" E = %f.\n", o);
}

void exerc5_21(void)
{
    int n = 0, o, p, q;
    printf("Informe a quantidade de entradas: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &o);
        if (i == 0)
        {
            p = o;
            q = 1;
        }
        else
        {
            if (o > p)
            {
                p = o;
                q = 1;
            }
            else if (o == p)
                q++;
        }
    }
    printf(" o maior número foi %d e foi lido %d vezes.\n", p, q);
}
