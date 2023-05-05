#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/exercicios.h"

void exerc10_1(void)
{
    int n = 0, o = 0;
    int *pn, *po;
    pn = &n;
    po = &o;
    if (pn > po)
        printf("o maior endereço é %p\n", pn);
    else
        printf("o maior endereço é %p\n", po);
}

void exerc10_2(void)
{
    int n = 0, o = 0;
    int *pn, *po;
    printf("Entre dois inteiros: ");
    scanf("%d %d", &n, &o);
    pn = &n;
    po = &o;
    if (pn > po)
        printf("o maior endereço é %p com valor %d\n", pn, n);
    else
        printf("o maior endereço é %p com valor %d\n", po, o);
}

void exerc10_3(void)
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        printf("endereço %p contém o valor %d.\n", &v[i], v[i]);
    }
}

void exerc10_4(void)
{
    float v[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("endereço %p contém o valor %.1f.\n", &v[i][j], v[i][j]);
        }
    }
}

void exerc10_5(void)
{
    int v[] = {1, 2, 3, 4, 5}, *p = &v;
    for (int i = 0; i < 5; i++)
    {
        printf(" %d %d\n", v[i], *p * 2);
        p++;
    }
}

void exerc10_6(void)
{
    int v[5], *p = &v;
    printf("Entre 5 inteiros separados por espaço: ");
    scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);
    for (int i = 0; i < 5; i++)
    {
        if (*p % 2 == 0)
            printf(" %p %d\n", p, *p);
        p++;
    }
}

int eh_igual(char a[], char b[])
{
    if (strlen(a) != strlen(b))
        return 0;
    int *pa = &a, *pb = &b;
    for (int i = 0; i < strlen(a); i++)
    {
        pa = &a[0] + sizeof(a[0]) * i;
        pb = &b[0] + sizeof(b[0]) * i;
        char c1 = *pa, c2 = *pb;
        if (c1 != c2)
            return 0;
    }
    return 1;
}
void exerc10_7(void)
{
    char s[] = "String a ser varrida", t[] = "ser";
    char *p = &s;
    int n = strlen(t);
    char u[n];
    for (int j = 0; j < n; j++)
        u[j] = NULL;
    for (int i = 0; i < strlen(s) - n; i++)
    {
        p = &s[0] + sizeof(s[0]) * i;
        for (int j = 0; j < n; j++)
            u[j] = *p++;
        if (eh_igual(t, u) == 1)
        {
            printf(" '%s' está contida em '%s'.\n", t, s);
            return;
        }
    }
    printf(" '%s' não está contida em '%s'.\n", t, s);
}

void enche_vetor(int v[], int n, int valor)
{
    int *p = &v[0];
    for (int i = 0; i < n; i++)
        *p++ = valor;
}

void exerc10_8(void)
{
    int v[10], n = 5;
    for (int i = 0; i < 10; i++)
        printf(" %d ", v[i] = 0);
    printf("\n");
    enche_vetor(v, 10, n);
    for (int i = 0; i < 10; i++)
        printf(" %d ", v[i]);
    printf("\n");
}

void print_vetor(int v[], int n)
{
    int *p = &v[0];
    for (int i = 0; i < n; i++)
        printf(" %d%", *p++);
    printf("\n");
}

void exerc10_9(void)
{
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_vetor(v, 10);
}

void exerc10_10(void)
{
    int a = 1, *b = &a, **c = &b, ***d = &c;

    printf("%d %d %d %d\n", a, *b * 2, **c * 3, ***d * 4);
}