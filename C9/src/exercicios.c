#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "../include/exercicios.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

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

float volume_cilindro(float r, float h)
{
    return M_PI * r * r * h;
}

void exerc9v_4(void)
{
    float r = 10.0, h = 10.0, v = volume_cilindro(r, h);
    printf("o volume do cilindro com raio %.1f e altura %.1f é %.2f.\n", r, h, v);
}

float volume_esfera(float r)
{
    return 4.0 / 3.0 * M_PI * r * r * r;
}

void exerc9v_5(void)
{
    float r = 10, v = volume_esfera(r);
    printf("o volume da esfera com raio %.1f é %.2f.\n", r, v);
}

float imc(float p, float h)
{
    return p / (h * h);
}

void exerc9v_6(void)
{
    float p = 130, h = 1.90, im = imc(p, h);
    printf("o IMC de uma pessoa com peso %.1f e altura %.1f é %.2f.\n", p, h, im);
}

int hms_to_s(int h, int m, int s)
{
    return h * 60 * 60 + m * 60 + s;
}

void exerc9v_7(void)
{
    int h = 2, m = 30, s = 10, r = hms_to_s(h, m, s);
    printf(" %d horas, %d minutos e %d segundos é igual a %d segundos.\n", h, m, s, r);
}

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

double sen_x(double n)
{
    double r = n * M_PI / 180.0; // radianos
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

double cos_x(double n)
{
    double r = n * M_PI / 180.0; // radianos
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

void exerc9r_1(void) {}
void exerc9r_2(void) {}
void exerc9r_3(void) {}
void exerc9r_4(void) {}
void exerc9r_5(void) {}
void exerc9r_6(void) {}
void exerc9r_7(void) {}
void exerc9r_8(void) {}
void exerc9r_9(void) {}
void exerc9r_10(void) {}
void exerc9r_11(void) {}
void exerc9r_12(void) {}
void exerc9r_13(void) {}
void exerc9r_14(void) {}
void exerc9r_15(void) {}

void exerc9c_1(void) {}
void exerc9c_2(void) {}
void exerc9c_3(void) {}
void exerc9c_4(void) {}
void exerc9c_5(void) {}
void exerc9c_6(void) {}
void exerc9c_7(void) {}
void exerc9c_8(void) {}
void exerc9c_9(void) {}
void exerc9c_10(void) {}
void exerc9c_11(void) {}
void exerc9c_12(void) {}
void exerc9c_13(void) {}
void exerc9c_14(void) {}
void exerc9c_15(void) {}