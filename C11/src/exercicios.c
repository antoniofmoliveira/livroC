#include <stdio.h>
#include <stdlib.h>
#include "../include/exercicios.h"

void exerc11_1(void)
{
    printf(" tamanho de char é %d.\n", sizeof(char));
    printf(" tamanho de int é %d.\n", sizeof(int));
    printf(" tamanho de float é %d.\n", sizeof(float));
    printf(" tamanho de double é %d.\n", sizeof(double));
}

struct aluno
{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
};

void exerc11_2(void)
{
    printf(" tamanho da struct aluno é %d.\n", sizeof(struct aluno));
}

struct cadastro
{
    char nome[30];
    int idade;
    char endereco[30]
};

void exerc11_3(void)
{
    int n = 0;
    printf("qual o tamanho do cadastro: ");
    scanf("%1d", &n);
    getchar();
    struct cadastro *c = (struct cadastro *)malloc(sizeof(struct cadastro) * n);
    for (int i = 0; i < n; i++)
    {

        printf("cadastro %d nome: ", i);
        scanf("%30[^\n]", c[i].nome);
        getchar();
        printf("cadastro %d idade: ", i);
        scanf("%2d", &c[i].idade);
        getchar();
        printf("cadastro %d endereço: ", i);
        scanf("%30[^\n]", c[i].endereco);
        getchar();
        printf("\n");
    }
    for (int i = 0; i < n; i++)
        printf("cadastro %d : %s, %d, %s.\n", i, c[i].nome, c[i].idade, c[i].endereco);
    free(c);
}

void exerc11_4(void)
{
    int n = 0;
    printf("qual o tamanho do vetor de inteiros: ");
    scanf("%1d", &n);
    getchar();
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf(" insira valor para a posição %d do vetor: ", i);
        scanf("%d", &c[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

void exerc11_5(void)
{
    int n = 0;
    while (n <= 0)
    {
        printf("qual o tamanho do vetor de inteiros: ");
        scanf("%1d", &n);
        getchar();
    }
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        while (c[i] < 2)
        {
            printf(" insira valor maior ou igual a 2 para a posição %d do vetor: ", i);
            scanf("%d", &c[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

void exerc11_6(void)
{
    int n = 0;
    printf("qual o tamanho do vetor de inteiros: ");
    scanf("%1d", &n);
    getchar();
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf(" insira valor para a posição %d do vetor: ", i);
        scanf("%d", &c[i]);
    }
    printf("\n");
    int p;
    printf("Informe o valor a ser procurado no vetor: ");
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
        if (c[i] == p)
            printf(" 1");
        else
            printf(" 0");
    printf("\n");
    free(c);
}

void exerc11_7(void)
{
    int n = 0;
    printf("qual o tamanho do vetor de inteiros: ");
    scanf("%2d", &n);
    getchar();
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        c[i] = i;
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

int *alocar(int n)
{
    if (n <= 0)
        return NULL;
    else
        return (int *)malloc(sizeof(int) * n);
}

void exerc11_8(void)
{
    int n = 15;
    int *c = alocar(n);
    for (int i = 0; i < n; i++)
        c[i] = i;
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

char *inverte(char s[])
{
    int n = strlen(s), pos = n;
    char *p = alocar(n + 1);
    for (int i = 0; i < n + 1; i++)
        p[i] = NULL;
    for (int i = 0; i < n; i++)
        p[--pos] = s[i];
    return p;
}

void exerc11_9(void)
{
    char s[] = "palavra a";
    char *p = inverte(s);
    printf("'%s'\n", p);
    free(p);
}

int *alocar_com_valor(int n, int o)
{
    if (n <= 0)
        return NULL;
    else
    {
        int *c = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
        {
            c[i] = o;
        }
        return c;
    }
}

void exerc11_10(void)
{
    int n = 15;
    int *c = alocar_com_valor(n, 5);
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

int *alocar_matriz(int n)
{
    if (n <= 0)
        return NULL;
    else
    {
        int *c = (int *)malloc(sizeof(int) * n * n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    c[i * n + j] = 1;
                else
                    c[i * n + j] = 0;
            }
        }
        return c;
    }
}

void exerc11_11(void)
{
    int n = 5;
    int *c = alocar_matriz(n);
    for (size_t i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %2d", c[i * n + j]);
        }
        printf("\n");
    }
    free(c);
}

int *alocar_matriz2(int n)
{
    if (n <= 0)
        return NULL;
    else
    {
        int *c = (int *)malloc(sizeof(int) * n * n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                c[i * n + j] = 0;
        for (int i = 0, j = n - 1; i < n; i++, j--)
            c[i * n + j] = 1;
        return c;
    }
}
void exerc11_12(void)
{
    int n = 5;
    int *c = alocar_matriz2(n);
    for (size_t i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %2d", c[i * n + j]);
        }
        printf("\n");
    }
    free(c);
}

int *alocar_matriz3(int n)
{
    if (n <= 0)
        return NULL;
    else
    {
        int *c = (int *)malloc(sizeof(int) * n * n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    c[i * n + j] = 0;
                else if (i < j)
                    c[i * n + j] = 1;
                else
                    c[i * n + j] = -1;
            }
        }
        return c;
    }
}

void exerc11_13(void)
{
    int n = 5;
    int *c = alocar_matriz3(n);
    for (size_t i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %2d", c[i * n + j]);
        }
        printf("\n");
    }
    free(c);
}

int *soma_vetores(int a[], int b[], int n)
{
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        c[i] = a[i] + b[i];
    return c;
}

void exerc11_14(void)
{
    int n = 5;
    int a[] = {1, 2, 3, 4, 5}, b[] = {5, 4, 3, 2, 1};
    int *c = soma_vetores(a, b, n);
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

int *mult_vetores(int a[], int b[], int n)
{
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        c[i] = a[i] * b[i];
    return c;
}

void exerc11_15(void)
{
    int n = 5;
    int a[] = {1, 2, 3, 4, 5}, b[] = {5, 4, 3, 2, 1};
    int *c = mult_vetores(a, b, n);
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

int *matrizXvetor(int m[][2], int v[], int n)
{
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        c[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[j] += m[i][j] * v[j];
        }
    }
    return c;
}

void exerc11_16(void)
{
    int n = 2;
    int m[2][2] = {1, 2, 3, 4};
    int v[2] = {1, 2};
    int *c = matrizXvetor(m, v, n);
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

int *soma_colunas(int a[][5], int n)
{
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[j] += a[i][j];
        }
    }
    return c;
}
void exerc11_17(void)
{
    int n = 5;
    int a[5][5] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    int *c = soma_colunas(a, 5);
    for (int i = 0; i < n; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(c);
}

const MAX = 10;

// https://pt.stackoverflow.com/questions/308266/multiplica%C3%A7%C3%A3o-de-matrizes-e-armazenar-em-outra-matriz
int multiplicar_matrizes(
    int matA[][MAX], int na, int ma,
    int matB[][MAX], int nb, int mb,
    int matC[][MAX], int nc, int mc)
{

    if (ma != nb || na != nc || mb != mc)
        return 1;

    int a = na, b = ma, c = mb;

    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < c; k++)
        {
            matC[i][k] = 0;
            for (int j = 0; j < b; j++)
            {
                matC[i][k] += matA[i][j] * matB[j][k];
            }
        }
    }
    return 0;
}

void exerc11_18(void)
{
}
