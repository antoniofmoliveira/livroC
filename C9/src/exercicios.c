#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "../include/exercicios.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
// ------------------------------------------
int maior(int n, int o)
{
    if (n > o)
        return n;
    else
        return o;
}

void exerc9v_1(void)
{
    printf("Informe dois números inteiros: ");
    int n, o;
    scanf("%3d %3d", &n, &o);
    printf(" o maior é %d.\n", maior(n, o));
}
// ------------------------------------------
char nome_do_mes(int num_mes, char nome_mes[])
{
    struct smes
    {
        char nome[10];
        int dias;
    };
    enum emes
    {
        Janeiro = 1,
        Fevereiro,
        Março,
        Abril,
        Maio,
        Junho,
        Julho,
        Agosto,
        Setembro,
        Outubro,
        Novembro,
        Dezembro,
    };
    struct smes meses[13] =
        {
            {"", 0},
            {"Janeiro", 31},
            {"Fevereiro", 28},
            {"Março", 31},
            {"Abril", 30},
            {"Maio", 31},
            {"Junho", 30},
            {"Julho", 31},
            {"Agosto", 31},
            {"Setembro", 30},
            {"Outubro", 31},
            {"Novembro", 30},
            {"Dezembro", 31},
        };
    if (num_mes < Janeiro || num_mes > Dezembro)
    {
        printf(" mês inexistente.\n");
        return NULL;
    }
    else
    {
        strcpy(nome_mes, meses[num_mes].nome);
        return (meses[num_mes].nome);
    }
}

void exerc9v_2(void)
{

    int mes;
    char nome_mes[15];
    printf("Entre o mês (1-12): ");
    scanf("%2d", &mes);
    char r = nome_do_mes(mes, nome_mes);
    if (r == NULL)
        printf(" mês inexistente.\n");
    else
        printf(" escolheu o mês de %s.\n", nome_mes);
}
// ------------------------------------------
float fahrenheit_to_celsius(float temptemp_fahrenheit)
{
    return (temptemp_fahrenheit - 32.0) * (5.0 / 9.0);
}

void exerc9v_3(void)
{
    float temp_fahrenheit = 0;
    printf("Entre a temperatura fahrenheit (5): ");
    scanf("%5f", &temp_fahrenheit);
    float r = fahrenheit_to_celsius(temp_fahrenheit);
    printf(" %.2fF = %.2fC.\n", temp_fahrenheit, r);
}
// ------------------------------------------
float volume_cilindro(float r, float h)
{
    return M_PI * r * r * h;
}

void exerc9v_4(void)
{
    float r = 10.0, h = 10.0, v = volume_cilindro(r, h);
    printf("o volume do cilindro com raio %.1f e altura %.1f é %.2f.\n", r, h, v);
}
// ------------------------------------------
float volume_esfera(float r)
{
    return 4.0 / 3.0 * M_PI * r * r * r;
}

void exerc9v_5(void)
{
    float r = 10, v = volume_esfera(r);
    printf("o volume da esfera com raio %.1f é %.2f.\n", r, v);
}
// ------------------------------------------
float imc(float p, float h)
{
    return p / (h * h);
}

void exerc9v_6(void)
{
    float p = 130, h = 1.90, im = imc(p, h);
    printf("o IMC de uma pessoa com peso %.1f e altura %.1f é %.2f.\n", p, h, im);
}
// ------------------------------------------
int hms_to_s(int h, int m, int s)
{
    return h * 60 * 60 + m * 60 + s;
}

void exerc9v_7(void)
{
    int h = 2, m = 30, s = 10, r = hms_to_s(h, m, s);
    printf(" %d horas, %d minutos e %d segundos é igual a %d segundos.\n", h, m, s, r);
}
// ------------------------------------------
int qperf(int n)
{
    int o = sqrt(n);
    return n == o * o;
}

void exerc9v_8(void)
{
    int n = 9, b = qperf(n);
    if (b)
        printf("%d é quadrado perfeito.\n", n);
    else
        printf("%d não é quadrado perfeito.\n", n);
    n = 10, b = qperf(n);
    if (b)
        printf("%d é quadrado perfeito.\n", n);
    else
        printf("%d não é quadrado perfeito.\n", n);
}
// ------------------------------------------
float calc_nota_media(float n1, float n2, float n3, char tipo_media)
{
    if (tipo_media == 'A')
        return (n1 + n2 + n3) / 3;
    if (tipo_media == 'P')
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    return -1;
}

void exerc9v_9(void)
{
    float n1 = 5.0, n2 = 7.0, n3 = 9.5;
    float ma = calc_nota_media(n1, n2, n3, 'A');
    float mp = calc_nota_media(n1, n2, n3, 'P');
    printf("a média aritmética de %.1f, %.1f e %.1f é %.1f.\n", n1, n2, n3, ma);
    printf("a média ponderada  de %.1f, %.1f e %.1f é %.1f.\n", n1, n2, n3, mp);
}
// ------------------------------------------
float calc(float n1, float n2, char op)
{
    switch (op)
    {
    case '+':
        return n1 + n2;
        break;
    case '-':
        return n1 - n2;
        break;
    case '*':
        return n1 * n2;
        break;
    case '/':
        if (n2 != 0)
            return n1 / n2;
        break;
    default:
        printf(" não foi possível executar operação.\n.");
        return 0;
        break;
    }
}

void exerc9v_10(void)
{
    float n1 = 10.0, n2 = 5.0;
    printf(" %.1f + %.1f = %.1f.\n", n1, n2, calc(n1, n2, '+'));
    printf(" %.1f - %.1f = %.1f.\n", n1, n2, calc(n1, n2, '-'));
    printf(" %.1f * %.1f = %.1f.\n", n1, n2, calc(n1, n2, '*'));
    printf(" %.1f / %.1f = %.1f.\n", n1, n2, calc(n1, n2, '/'));
}
// ------------------------------------------
int exp_(int n, int o)
{
    int p = 1;
    for (int i = 0; i < o; i++)
        p = p * n;
    return p;
}

void exerc9v_11(void)
{
    int n = 3, o = 3;
    printf("%d^%d = %d.\n", n, o, exp_(n, o));
}
// ------------------------------------------
int proximo_primo(int n)
{
    int achou = 0;
    int o = n;
    while (!achou)
    {
        int i;
        o = o + 1;
        for (i = 2; i < o; i++)
            if (o % i == 0)
                break;
        if (achou == 0 && i == o)
            achou = 1;
    }
    return o;
}

int maior_fator_primo(int n)
{
    int mul_primos = 1;
    int o = n;
    int primo_atu = 2;
    while (mul_primos != n)
    {
        int resto = o % primo_atu;
        if (resto == 0)
        {
            mul_primos = mul_primos * primo_atu;
            o = o / primo_atu;
            // printf(" %d %d %d %d -", primo_atu, o, resto, mul_primos);
        }
        else
            primo_atu = proximo_primo(primo_atu);
    }
    return primo_atu;
}

void exerc9v_12(void)
{
    int n = 44;
    printf(" maior fator primo de %d é %d.\n", n, maior_fator_primo(n));
}
// ------------------------------------------
int soma_abaixo(int n)
{
    int o = 0;
    for (int i = 0; i <= n; i++)
    {
        o += i;
    }
    return o;
}

void exerc9v_13(void)
{
    int n = 50;
    printf(" a soma dos número inteiros postivos até %d é %d.\n", n, soma_abaixo(n));
}
// ------------------------------------------
int fatorial(int n)
{
    if (n == 0)
        return 1;
    int o = 1;
    for (int i = 1; i <= n; i++)
    {
        o *= i;
    }
    return o;
}

void exerc9v_14(void)
{
    int n = 10;
    printf(" fatorial de %d é %d.\n", n, fatorial(n));
}
// ------------------------------------------
void imprime_exc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}

void exerc9v_15(void)
{
    int n = 5;
    imprime_exc(n);
}
// ------------------------------------------
void imprime_ast(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void exerc9v_16(void)
{
    int n = 5;
    imprime_ast(n);
}
// ------------------------------------------
float serieS(int n)
{
    float r = 0;
    for (int i = 0; i <= n; i++)
    {
        printf(" (%.0f/%.0f) +", (i * i + 1.0), (i + 3.0));
        r = r + (i * i + 1.0) / (i + 3.0);
    }
    printf(" \n");
    return r;
}

void exerc9v_17(void)
{
    int n = 5;
    printf(" a soma da série S de %d é %.1f.\n", n, serieS(n));
}
// ------------------------------------------
double graus_to_radianos(double n)
{
    return n * M_PI / 180.0; // radianos
}

double sen_x(double n)
{
    double r = graus_to_radianos(n);
    printf("%f\n", r);
    double acc = 0.0;
    for (double i = 0.0; i <= 5.0; i++)
    {
        double s = (double)i;
        double o = 2.0 * s + 1.0;
        printf(" %.2f ", o);
        acc += ((pow(-1, s) / fatorial((int)o)) * pow(r, o));
    }
    return acc;
}

void exerc9v_18(void)
{
    double n = 85; // graus
    printf("sen %.2f graus é %f.\n", n, sen_x(n));
}
// ------------------------------------------
double cos_x(double n)
{
    double r = graus_to_radianos(n);
    printf("%f\n", r);
    double acc = 0.0;
    for (int i = 0; i <= 5; i++)
    {
        double o = 2.0 * (double)i;
        printf(" %.2f ", o);
        acc += (pow(-1, (double)i) / fatorial(o)) * pow(r, o);
    }
    return acc;
}

void exerc9v_19(void)
{
    double n = 95; // graus
    printf("cos %.2f graus é %f.\n", n, cos_x(n));
}
// ------------------------------------------
double enep(double n)
{
    double acc = 0.0;
    for (int i = 0; i <= (int)n; i++)
    {
        acc += 1.0 / (double)fatorial(i);
    }
    return acc;
}
void exerc9v_20(void)
{
    double n = 10;
    printf(" e= %f.\n", enep(n));
}
// ------------------------------------------
void separa(float n, int *o, float *p)
{
    *o = (int)n;
    *p = n - *o;
}

void exerc9r_1(void)
{
    float n = 1.5;
    int o = 0;
    float p = 0.0;
    separa(n, &o, &p);
    printf(" %f = %d + %f.\n", n, o, p);
}
// ------------------------------------------
float area_esfera(float r)
{
    return 4 * M_PI * r * r;
}

void volume_area_esfera_ref(float r, float *v, float *a)
{
    *v = volume_esfera(r);
    *a = area_esfera(r);
}

void exerc9r_2(void)
{
    float r = 15, v = 0.0, a = 0.0;
    volume_area_esfera_ref(r, &v, &a);
    printf(" o volume da esfera com raio %f é %f.\n", r, v);
    printf(" a área da esfera com raio %f é %f.\n", r, a);
}
// ------------------------------------------
int soma_array(int a[], int n) // ou *a
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}

void exerc9r_3(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = soma_array(a, 10);
    printf(" a soma do array é %d.\n", s);
}
// ------------------------------------------
float media_array(int a[], int n) // ou *a
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return (float)s / (float)n;
}

void exerc9r_4(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float s = media_array(a, 10);
    printf(" a média do array é %f.\n", s);
}
// ------------------------------------------
float desvio_padrao_amostra(int a[], int n) // ou *a
{
    float s = 0.0, o = 0.0, p = 0, q = 0.0, r = 0.0;
    for (int i = 0; i < n; i++)
        s += (float)a[i];          // soma
    o = s / (float)n;              // média aritmética
    for (int i = 0; i < n; i++)    // cada elemento subtrai a média e eleva o resultado ao quadrados
    {                              //
        float f = (float)a[i] - o; //
        p += (f * f);              // a soma dos quadrados da subração da média de cada elemento
    }                              //
    q = p / ((float)n - 1.0);      // variância da amostra. se população retira o -1
    r = sqrt(q);                   // desvio padrão
    return r;
}

void exerc9r_5(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float s = desvio_padrao_amostra(a, 10);
    printf(" o desvio padrão do array é %f.\n", s);
}
// ------------------------------------------
void transpose(int a[][5], int b[][5], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}

void exerc9r_6(void)
{
    int a[5][5] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 1}, {3, 4, 5, 1, 2}, {4, 5, 1, 2, 3}, {5, 1, 2, 5, 4}};
    int b[5][5];
    transpose(a, b, 5, 5);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
}
// ------------------------------------------
int soma_matriz(int a[][10], int n, int m)
{
    int acc = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            acc += a[i][j];
        }
    }
    return acc;
}

void exerc9r_7(void)
{
    int a[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = i * 10 + j;
            printf(" %2d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    int r = soma_matriz(a, 10, 10);
    printf(" a soma da matriz é %d.\n", r);
}
// ------------------------------------------
void soma_diagonais(int a[][6], int n, int m, int *r1, int *r2)
{
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
                d1 += a[i][j];
        }
    }
    *r1 = d1;
    for (int i = 0, j = 6 - 1; i < 6; i++, j--)
        d2 += a[i][j];
    *r2 = d2;
}

void exerc9r_8(void)
{
    int a[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            a[i][j] = i * 6 + j;
            if (i == j)
                a[i][j] = 1;
        }
        printf("\n");
    }
    for (int i = 0, j = 6 - 1; i < 6; i++, j--)
        a[i][j] = 2;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
            printf(" %2d", a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    int r1 = 0, r2 = 0;
    soma_diagonais(a, 6, 6, &r1, &r2);
    printf(" a soma da diagonal principal é %d.\n", r1);
    printf(" a soma da diagonal secundária é %d.\n", r2);
}
// ------------------------------------------
struct aluno
{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
};

int maior_media_geral(struct aluno a[], int n)
{
    int in = 0;
    float me = 0.0;

    for (int i = 0; i < n; i++)
    {
        float m = (a[i].nota1 + a[i].nota2 + a[i].nota3) / 3.0;
        if (i == 0)
        {
            in = 0;
            me = m;
        }
        else
        {
            if (m > me)
            {
                me = m;
                in = i;
            }
        }
    }
    return in;
}

void exerc9r_9(void)
{
    struct aluno a[6] = {
        {1, "nome 1", 5.5, 3.3, 2.2},
        {2, "nome 2", 7.5, 4.3, 4.2},
        {3, "nome 3", 8.5, 5.3, 6.2},
        {4, "nome 4", 6.5, 9.3, 6.2},
        {5, "nome 5", 9.5, 2.3, 4.2},
        {6, "nome 6", 4.5, 1.3, 2.2},
    };
    int i = maior_media_geral(a, 6);
    printf(" o índice da maior média geral é %d.\n", i);
}
// ------------------------------------------
int eh_palindromo(char s[])
{
    int n = strlen(s), pos = n;
    char p[n];
    for (int i = 0; i < n; i++)
        p[i] = NULL;
    for (int i = 0; i < n; i++)
        p[--pos] = s[i];
    return (strcmp(s, p) == 0);
}

void exerc9r_10(void)
{
    char v[] = "arara";
    int b = eh_palindromo(v);
    if (b)
        printf(" %s é palindromo.\n", v);
    else
        printf(" %s não é palindromo.\n", v);
}
// ------------------------------------------
void to_maiuscula(char s[])
{
    for (int i = 0; i < strlen(s); i++)
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
}

void exerc9r_11(void)
{
    char s[] = "arara";
    to_maiuscula(s);
    printf(" %s.\n", s);
}
// ------------------------------------------
void soma_vetor_pi(int v[], int n, int *si, int *sp)
{
    int ti = 0, tp = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            tp += v[i];
        else
            ti += v[i];
    }
    *si = ti;
    *sp = tp;
}

void exerc9r_12(void)
{
    int v[10], ti = 0, tp = 0;
    for (int i = 0; i < 10; i++)
    {
        v[i] = i;
        printf(" %d", i);
    }
    soma_vetor_pi(v, 10, &ti, &tp);
    printf("\n soma dos impares = %d. soma dos pares = %d.\n", ti, tp);
}
// ------------------------------------------
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int ordenar(int v[], int n)
{
    qsort(v, n, sizeof(v[0]), compare);
}

void exerc9r_13(void)
{
    int v[9];
    int pos = 0;
    for (int i = 9; i >= 0; i--)
        v[pos++] = i;
    for (int i = 0; i < 9; i++)
        printf(" %d", v[i]);
    printf("\n");
    ordenar(v, 9);
    for (int i = 0; i < 9; i++)
        printf(" %d", v[i]);
    printf("\n");
}
// ------------------------------------------
int eq_segundo_grau(float a, float b, float c, float *r1, float *r2)
{
    if (a == 0)
    {
        printf("Não é equação do segundo grau.\n");
        return -1;
    }
    float d = (b * b) - (4.0 * a * c);
    if (d < 0)
    {
        return 0;
    }
    else if (d == 0)
    {
        float r = -b / (2.0 * a);
        *r1 = r;
        return 1;
    }
    else
    {
        float r01 = (-b + d) / (2.0 * a);
        float r02 = (-b - d) / (2.0 * a);
        *r1 = r01;
        *r2 = r02;
        return 2;
    }
}

void exerc9r_14(void)
{
    float a = 5.0, b = 10.0, c = 5.0, rz1 = 0.0, rz2 = 0.0;
    int r = eq_segundo_grau(a, b, c, &rz1, &rz2);
    if (r == 0)
        printf("Não existe raiz.\n");
    else if (r == 1)
        printf("Raiz única: %f.\n", rz1);
    else if (r == 2)
        printf("Raizes %f e %f.\n", rz1, rz2);
    else if (r == -1)
        printf("Não é equação do segundo grau.\n");
}
// ------------------------------------------
void maior_menor(int v[], int n, int *maior, int *menor)
{
    int ma = 0, me = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ma = v[i];
            me = v[i];
        }
        else
        {
            if (v[i] > ma)
                ma = v[i];
            if (v[i] < me)
                me = v[i];
        }
    }
    *maior = ma;
    *menor = me;
}

void exerc9r_15(void)
{
    int maior, menor, v[] = {5, 4, 3, 2, 1, 0, 9, 8, 7, 6};
    maior_menor(v, 10, &maior, &menor);
    printf("maior = %d, menor = %d.\n", maior, menor);
}
// ------------------------------------------
void maior_qt(int v[], int n, int *maior, int *qt)
{
    int ma = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ma = v[i];
            q = 1;
        }
        else
        {
            if (v[i] > ma)
            {
                ma = v[i];
                q = 1;
            }
            else if (v[i] == ma)
            {
                q++;
            }
        }
    }
    *maior = ma;
    *qt = q;
}
void exerc9r_16(void)
{
    int maior, qt, v[] = {5, 4, 3, 9, 1, 0, 9, 8, 7, 6};
    maior_qt(v, 10, &maior, &qt);
    printf("maior = %d, %d vezes.\n", maior, qt);
}
// ------------------------------------------
int cubos(int n)
{
    if (n == 1)
        return 1;
    else
        return pow(n, 3) + cubos(n - 1);
}

void exerc9c_1(void)
{
    int n = 10;
    printf(" soma dos cubos de %d é %d.\n", n, cubos(n));
}
// ------------------------------------------
int somar(int n)
{
    if (n == 1)
        return 1;
    else
        return n + somar(n - 1);
}
void exerc9c_2(void)
{
    int n = 10;
    printf(" soma dos números entre 1 ee %d é %d.\n", n, somar(n));
}
// ------------------------------------------
void print_n(int n)
{
    if (n == 0)
        printf(" %d", n);
    else
    {
        print_n(n - 1);
        printf(" %d", n);
    }
}
void exerc9c_3(void)
{
    print_n(10);
    printf("\n");
}
// ------------------------------------------
void print_nd(int n)
{
    if (n == 0)
        printf(" %d", n);
    else
    {
        printf(" %d", n);
        print_nd(n - 1);
    }
}

void exerc9c_4(void)
{
    print_nd(10);
    printf("\n");
}
// ------------------------------------------
int soma_vetor(int v[], int n, int pos)
{
    if (pos == 0)
        return v[0];
    else
        return v[pos] + soma_vetor(v, n, pos - 1);
}

void exerc9c_5(void)
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf(" soma vetor é: %d.\n", soma_vetor(v, 10, 9));
}
// ------------------------------------------
float media_vetor(int v[], int n, int pos)
{
    return (float)soma_vetor(v, n, pos) / n;
}

void exerc9c_6(void)
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf(" media vetor é: %f.\n", media_vetor(v, 10, 9));
}
// ------------------------------------------
int pow_rec(int x, int y)
{
    if (y == 1)
        return x;
    else
        return x * pow_rec(x, y - 1);
}

void exerc9c_7(void)
{
    printf(" 2^4 = %d.\n", pow_rec(2, 4));
}
// ------------------------------------------
int mult_rec(int x, int y)
{
    if (y == 1)
        return x;
    else
        return x + mult_rec(x, y - 1);
}

void exerc9c_8(void)
{
    printf(" 2*4 = %d.\n", mult_rec(2, 4));
}
// ------------------------------------------
int fatorial_rec(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fatorial_rec(n - 1);
}

void exerc9c_9(void)
{
    printf("fatorial de 10 é %d %d.\n", fatorial_rec(10), fatorial(10));
}
// ------------------------------------------
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void exerc9c_10(void)
{
    printf(" fibonacci 5 = %d.\n", fibonacci(5));
}
// ------------------------------------------
void inverter(char v[], char r[], int n, int pos)
{
    if (n < 0)
        return;
    else
    {
        char t[2] = {v[n], NULL};
        strcat(r, t);
        inverter(v, r, n - 1, pos + 1);
    }
}

int inverte(int n)
{
    char s[10], r[10];
    for (int i = 0; i < 10; i++)
    {
        s[i] = NULL;
        r[i] = NULL;
    }
    sprintf(s, "%d", n);
    inverter(s, r, strlen(s), 0);
    return atoi(r);
}

void exerc9c_11(void)
{
    int n = 123456;
    printf(" o inverso de %d é %d.\n", n, inverte(n));
}
// ------------------------------------------
void tobin(int n, char a[])
{
    if (n == 0)
        return;
    else
    {
        tobin(n / 2, a);
        printf("%d", n % 2);
        if (n % 2 == 0)
            strcat(a, "0");
        else
            strcat(a, "1");
    }
}

void exerc9c_12(void)
{
    char c[20];
    for (int i = 0; i < 20; i++)
        c[i] = NULL;
    tobin(19, c);
    printf("\n c = %s.\n", c);
}
// ------------------------------------------
float serieS2(float n)
{
    if (n == 1)
        return 2;
    else
        return ((1 + n * n) / n) + serieS2(n - 1);
}

void exerc9c_13(void)
{
    float s = serieS2(5);
    printf(" %f \n", s);
}
// ------------------------------------------
void menor(int v[], int n, int pos, int *dest)
{
    if (pos == 0)
        *dest = v[pos];
    else if (*dest > v[pos])
        *dest = v[pos];
    if (pos >= n - 1)
        return;
    menor(v, n, pos + 1, dest);
}

void exerc9c_14(void)
{
    int v[] = {5, 6, 7, 8, 1, 0, 3, 4, 5, 9};
    int r = -1;
    menor(v, 10, 0, &r);
    printf("menor é %d.\n", r);
}
// ------------------------------------------
float hn(float n)
{
    if (n == 1)
        return 1.0;
    else
        return 1.0 / n + hn(n - 1);
}

void exerc9c_15(void)
{
    printf("o 5. elemento da série harmônica é %f,\n", hn(5));
}
// ------------------------------------------