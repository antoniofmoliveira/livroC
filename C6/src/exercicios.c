#include <stdio.h>
#include <math.h>
#include "../include/exercicios.h"

void exercv6_1(void)
{
    const int num_elem = 6;
    int v[num_elem];
    printf("Informe %d numeros inteiros: \n", num_elem);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < num_elem; i++)
        printf(" %d", v[i]);
    printf("\n");
}

void exercv6_2(void)
{
    const int num_elem = 6;
    int v[num_elem];
    printf("Informe %d numeros inteiros: \n", num_elem);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (int i = num_elem - 1; i >= 0; i--)
        printf(" %d", v[i]);
    printf("\n");
}

void exercv6_3(void)
{
    const int num_elem = 5;
    int v[num_elem], n;
    float o = 0.0;
    printf("Informe %d numeros inteiros: \n", num_elem);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < num_elem; i++)
    {
        printf(" %d", v[i]);
        float p = v[i];
        o = o + p;
    }

    printf(" média: %f.\n", o / num_elem);
}

void exercv6_4(void)
{
    int a[] = {1, 0, 5, -2, -5, 7};
    int n = a[0] + a[1] + a[5];
    a[3] = 100;
    printf("Soma de a[0], a[1] e a[5]: %d\n", n);
    for (int i = 0; i < 6; i++)
        printf("a[%d] = %d\n", i, a[i]);
}

void exercv6_5(void)
{
    const int num_elem = 8;
    int v[num_elem];
    int n, o;
    printf("Informe %d numeros inteiros: \n", num_elem);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("Informe as posições a serem somadas separadas por espaço (1-%d): ", num_elem);
    scanf("%d %d", &n, &o);
    if (n < 1 || n > num_elem || o < 1 || o > num_elem)
    {
        printf(" Posições tem que estar entre 1 e %d.\n", num_elem);
        return 0;
    }
    printf(" a soma das posições %d (%d) e %d (%d) é %d\n", n, v[n - 1], o, v[o - 1], v[n - 1] + v[o - 1]);
}

void exercv6_6(void)
{
    const int num_elem = 10;
    int v[num_elem];
    int n = 0;
    printf("Informe %d numeros inteiros: \n", num_elem);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < num_elem; i++)
    {
        if (v[i] % 2 == 0)
            n++;
    }
    printf("Foram armazenados %d números pares.\n", n);
}

void exercv6_7(void)
{
    const int num_elem = 10;
    int v[num_elem];
    int n = 0, o, p;
    printf("Informe %d numeros inteiros: \n", num_elem);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < num_elem; i++)
    {
        if (i == 0)
        {
            o = v[i];
            p = v[i];
        }
        else
        {
            if (v[i] > o)
                o = v[i];
            if (v[i] < p)
                p = v[i];
        }
    }
    printf(" o maior valor foi %d,\n", o);
    printf(" o menor valor foi %d,\n", p);
}

void exercv6_8(void)
{
    float v[] = {1.0, 0.5, 5.2, -2.1, -5.8, 7.9, 8.5, 6.6, 4.0, 3.7};
    int n = 0;
    float o = 0.0;
    for (int i = 0; i < 10; i++)
        if (v[i] < 0)
            n++;
        else
            o += v[i];
    printf(" quantidade de negativos = %d\n Soma dos positivos = %f.\n", n, o);
}

void exercv6_9(void)
{
    const int num_elem = 10;
    float a[] = {1.0, 0.5, 5.2, -2.1, -5.8, 7.9, 8.5, 6.6, 4.0, 3.7};
    float b[] = {5.0, 3.1, 4.2, 9.0, 10.4, 5.3, 6.8, 9.3, 4.2, 5.1};
    float c[num_elem];
    for (int i = 0; i < num_elem; i++)
        c[i] = a[i] - b[i];
    for (int i = 0; i < num_elem; i++)
        printf(" %f,", c[i]);
    printf("\n");
}

void exercv6_10(void)
{
    const int num_elem = 100;
    int v[num_elem];
    int c = 0, i = 0;
    while (c < num_elem)
    {
        if (i % 7 != 0)
        {
            v[c] = i;
            c++;
        }
        i++;
    }
    for (int i = 0; i < num_elem; i++)
        printf("%d - %d, ", i, v[i]);
    printf("\n");
}

void exercv6_11(void)
{
    const int num_elem = 10;
    float a[] = {1.0, 0.5, 5.2, -2.1, -5.8, 7.9, 8.5, 6.6, 4.0, 3.7};
    float b[num_elem];
    for (int i = 0; i < num_elem; i++)
        b[i] = a[i] * a[i];
    for (int i = 0; i < num_elem; i++)
        printf(" %f,", a[i]);
    printf("\n");
    for (int i = 0; i < num_elem; i++)
        printf(" %f,", b[i]);
    printf("\n");
}

void exercv6_12(void)
{
    const int num_elem = 10;
    int a[] = {1, 5, 52, -21, -58, 79, 85, 5, 40, 1};
    for (int i = 0; i < num_elem; i++)
    {
        for (int j = i + 1; j < num_elem; j++)
        {
            if (a[i] == a[j])
            {
                printf(" %d", a[i]);
                break;
            }
        }
    }
    printf("\n");
}

void exercv6_13(void)
{
    const int num_elem = 10;
    int v[num_elem];
    int i = 0, n;
    printf("Informe %d numeros inteiros únicos: \n", num_elem);
    do
    {
        printf(" valor %d: ", i + 1);
        scanf("%d", &n);
        if (i == 0)
        {
            v[0] = n;
            i++;
        }
        else
        {
            int found = 0;
            for (int j = 0; j < i; j++)
                if (n == v[j])
                    found = 1;
            if (found == 0)
            {
                v[i] = n;
                i++;
            }
        }
    } while (i < num_elem);
    for (int i = 0; i < num_elem; i++)
        printf(" %d,", v[i]);
    printf("\n");
}

void exercv6_14(void)
{
    const int num_elem = 10;
    float v[num_elem];
    float n = 0, o = 0, p = 0, q = 0, r = 0;
    printf("Informe %d numeros: \n", num_elem);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%f", &v[i]);
        n += v[i]; // soma
    }
    o = n / num_elem;                  // média aritmética
    for (int i = 0; i < num_elem; i++) // cada elemento subtrai a média e eleva o resultado ao quadrados
    {                                  //
        float f = v[i] - o;            //
        p += (f * f);                  // a soma dos quadrados da subração da média de cada elemento
    }                                  //
    q = p / (num_elem - 1.0);          // variância da amostra. se população retira o -1
    r = sqrt(q);                       // desvio padrão
    printf(" o desvio padrão (amostra) do array é,: %f.\n", r);
}

int compare(const void *a, const void *b)
{
    return (*(float *)a - *(float *)b);
}

void exercv6_15(void)
{
    const int num_elem = 10;
    float v[num_elem];
    printf("Informe %d numeros: \n", num_elem);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    qsort(v, num_elem, sizeof(v[0]), compare);
    for (int i = 0; i < num_elem; i++)
        printf(" %f,", v[i]);
    printf("\n");
}

void exercm6_1(void)
{
    const int num_lin = 3;
    const int num_col = 3;
    float v[num_lin][num_col];
    float n;
    for (int i = 0; i < num_lin; i++)
    {
        printf("Informe %d numeros para a linha %d:\n", num_col, i);
        for (int j = 0; j < num_col; j++)
        {
            printf(" v[%d][%d]: ", i, j);
            scanf("%f", &v[i][j]);
            if (i == 0 && j == 0)
                n = v[i][j];
            else if (v[i][j] < n)
                n = v[i][j];
        }
    }
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %6.1f", v[i][j]);
        printf("\n");
    }
    printf(" o menor valor da matriz é: %f.\n", n);
}

void exercm6_2(void)
{
    const int num_lin = 4;
    const int num_col = 4;
    float v[num_lin][num_col];
    float n;
    int o = 0, p = 0;
    for (int i = 0; i < num_lin; i++)
    {
        printf("Informe %d numeros para a linha %d:\n", num_col, i);
        for (int j = 0; j < num_col; j++)
        {
            printf(" v[%d][%d]: ", i, j);
            scanf("%f", &v[i][j]);
            if (i == 0 && j == 0)
                n = v[i][j];
            else if (v[i][j] > n)
            {
                n = v[i][j];
                o = i;
                p = j;
            }
        }
    }
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %6.1f", v[i][j]);
        printf("\n");
    }
    printf(" o maior valor da matriz é: %f e está em v[%d][%d].\n", n, o, p);
}

void exercm6_3(void)
{
    const int num_lin = 5;
    const int num_col = 5;
    int v[num_lin][num_col];
    for (int i = 0; i < num_lin; i++)
        for (int j = 0; j < num_col; j++)
            if (i == j)
                v[i][j] = 1;
            else
                v[i][j] = 0;
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
}

void exercm6_4(void)
{
    const int num_lin = 4;
    const int num_col = 4;
    int v[num_lin][num_col];
    int n = 0;
    for (int i = 0; i < num_lin; i++)
    {
        printf("Informe %d numeros para a linha %d:\n", num_col, i);
        for (int j = 0; j < num_col; j++)
        {
            printf(" v[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
            if (v[i][j] > 10)
                n++;
        }
    }
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf(" a matriz tem %d valores maiores do que 10.\n", n);
}

void exercm6_5(void)
{
    const int num_lin = 4;
    const int num_col = 4;
    int v[num_lin][num_col];
    int n = 0;
    for (int i = 0; i < num_lin; i++)
    {
        printf("Informe %d numeros para a linha %d:\n", num_col, i);
        for (int j = 0; j < num_col; j++)
        {
            printf(" v[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
            if (v[i][j] < 0)
                n++;
        }
    }
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf(" a matriz tem %d valores negativos.\n", n);
}

void exercm6_6(void)
{
    const int num_lin = 3;
    const int num_col = 3;
    int v[num_lin][num_col];
    int n = 0;
    for (int i = 0; i < num_lin; i++)
    {
        printf("Informe %d numeros para a linha %d:\n", num_col, i);
        for (int j = 0; j < num_col; j++)
        {
            printf(" v[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
            if (i == j)
                n++;
        }
    }
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf(" a soma da diagonal principal é %d.\n", n);
}

void exercm6_7(void)
{
    const int num_lin = 3;
    const int num_col = 3;
    int v[num_lin][num_col];
    int n = 0;
    for (int i = 0; i < num_lin; i++)
    {
        printf("Informe %d numeros para a linha %d:\n", num_col, i);
        for (int j = 0; j < num_col; j++)
        {
            printf(" v[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
        }
    }
    for (int i = 0, j = num_col - 1; i < num_lin; i++, j--)
        n += v[i][j];
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf(" a soma da diagonal secundária é %d.\n", n);
}

void exercm6_8(void)
{
    const int num_lin = 10;
    const int num_col = 10;
    int v[num_lin][num_col];
    for (int i = 0; i < num_lin; i++)
        for (int j = 0; j < num_col; j++)
        {
            if (i < j)
                v[i][j] = 2 * i + 7 * j - 2;
            else if (i == j)
                v[i][j] = 3 * i * i - 1;
            else
                v[i][j] = 4 * i * i * i + 5 * j * j + 1;
        }
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
}
void exercm6_9(void)
{
    const int num_lin = 3;
    const int num_col = 3;
    int v[num_lin][num_col];
    int n[num_col];
    for (int j = 0; j < num_col; j++)
        n[j] = 0;
    for (int i = 0; i < num_lin; i++)
    {
        printf("Informe %d numeros para a linha %d:\n", num_col, i);
        for (int j = 0; j < num_col; j++)
        {
            printf(" v[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
            n[j] += v[i][j];
        }
    }
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    for (int j = 0; j < num_col; j++)
        printf(" %4d", n[j]);
    printf("\n");
}

void exercm6_10(void)
{
    const int num_lin = 10;
    const int num_col = 3;
    int v[][3] = {1, 2, 3, 6, 5, 4, 7, 8, 9, 10, 9, 8, 5, 4, 8, 4, 9, 0, 7, 6, 8, 8, 6, 7, 6, 8, 7, 7, 7, 6};
    int p[] = {0, 0, 0};
    for (int i = 0; i < num_lin; i++)
    {
        if (v[i][0] < v[i][1] && v[i][0] < v[i][2])
            p[0]++;
        else if (v[i][1] < v[i][0] && v[i][1] < v[i][2])
            p[1]++;
        else if (v[i][2] < v[i][0] && v[i][2] < v[i][1])
            p[2]++;
    }

    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf(" %d alunos foram piores na prova 1.\n", p[0]);
    printf(" %d alunos foram piores na prova 2.\n", p[1]);
    printf(" %d alunos foram piores na prova 3.\n", p[2]);
}

void exercm6_11(void)
{
    const int num_lin = 5;
    const int num_col = 5;
    int v[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int n = 0;
    for (int i = 0; i < num_lin; i++)
        for (int j = i + 1; j < num_col; j++)
            n += v[i][j];
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf(" soma dos elementos dessa matriz que estão acima da diagonal principal é %d.\n", n);
}
void exercm6_12(void)
{
    const int num_lin = 5;
    const int num_col = 5;
    int v[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int n = 0;
    for (int i = 0; i < num_lin; i++)
        for (int j = 0; j < i; j++)
            n += v[i][j];
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf(" soma dos elementos dessa matriz que estão abaixo da diagonal principal é %d.\n", n);
}

void exercm6_13(void)
{
    const int num_lin = 5;
    const int num_col = 5;
    int v[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int x[num_lin][num_col];
    int n = 0, o = 0, q = 0;
    for (int i = 0; i < num_lin; i++)
        for (int j = 0; j < num_col; j++)
        {
            n += v[i][j];
            x[i][j] = 0;
            if (i == j)
                x[i][j] = v[i][j];
        }
    printf("\n");
    for (int i = 0, j = num_col - 1; i < num_lin; i++, j--)
        x[i][j] = v[i][j];
    for (int i = 0; i < num_lin; i++)
        for (int j = 0; j < num_col; j++)
            o += x[i][j];
    q = n - o;
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", x[i][j]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf(" soma dos elementos dessa matriz qnão pertencem à diagonal principal nem à diagonal secundária é %d.\n", q);
}

void exercm6_14(void)
{

    const int num_lin = 5;
    const int num_col = 5;
    int v[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int x[num_lin][num_col];
    int n = 0, o = 0, q = 0;
    for (int i = 0; i < num_lin; i++)
        for (int j = 0; j < num_col; j++)
        {
            n += v[i][j];
            x[i][j] = NULL;
            if (i == j)
                x[i][j] = v[i][j];
        }
    for (int i = 0, j = num_col - 1; i < num_lin; i++, j--)
        x[i][j] = v[i][j];
    for (int i = 0; i < num_lin; i++)
        for (int j = 0; j < num_col; j++)
            o += x[i][j];
    q = n - o;
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", x[i][j]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", x[i][j] > 0 ? 0 : v[i][j]);
        printf("\n");
    }
    printf(" soma dos elementos dessa matriz que pertencem à diagonal principal ou à diagonal secundária é %d.\n", o);
    printf(" soma dos elementos dessa matriz qque não pertencem à diagonal principal nem à diagonal secundária é %d.\n", q);
    printf(" a diferença entre eles é %d.\n", q - o);
}

void exercm6_15(void)
{
    const int num_lin = 5;
    const int num_col = 5;
    int v[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int x[num_lin][num_col];
    for (int i = 0; i < num_lin; i++)
        for (int j = 0; j < num_col; j++)
            x[i][j] = v[i][j] * v[i][j];
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", v[i][j]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < num_lin; i++)
    {
        for (int j = 0; j < num_col; j++)
            printf(" %4d", x[i][j]);
        printf("\n");
    }
}