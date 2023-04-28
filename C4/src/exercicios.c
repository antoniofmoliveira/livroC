#include <stdio.h>
#include <stdlib.h>
#include <math.h> // altere makefile para LFLAGS = -lm
#include <string.h>

#include "../include/exercicios.h"

void exerc4_1(void)
{
    int n, o;
    printf("Informe dois números inteiros separados por espaço: ");
    scanf("%d %d", &n, &o);
    if (n > o)
        printf(" o maior é %d.\n", n);
    else if (n < o)
        printf(" o maior é %d.\n", o);
    else
        printf(" os números são iguais.\n");
}

void exerc4_2(void)
{
    exerc4_1();
}

void exerc4_3(void)
{
    int n;
    printf("Informe um número inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf(" %d é par.\n", n);
    else
        printf(" %d é impar.\n", n);
}

void exerc4_4(void)
{
    float n, o;
    printf("Informe o valor do saário e o valor da prestação separados por espaço: ");
    scanf("%f %f", &n, &o);
    if (o > (n * 0.2))
        printf(" Empréstimo não concedido.\n", n);
    else
        printf(" Empréstimo concedido..\n");
}

void exerc4_5(void)
{
    int m;
    printf("Informe um número inteiro: ");
    scanf("%d", &m);
    if (m >= 0)
    {
        float n = m;
        float o = n * n;
        float p = sqrt(n);
        printf(" o quadrado de %f é %f.\n", n, o);
        printf(" a raiz quadrada de %f é %f.\n", n, p);
    }
    else
        printf(" o número deve ser positivo.\n");
}

void exerc4_6(void)
{
    float n;
    char c;
    printf("Informe o sexo com um caracter (MF): ");
    c = getchar();
    printf("Informe a altura em número real: ");
    scanf("%f", &n);
    float p;
    if (c == 'M' || c == 'm')
    {
        p = (72.7 * n) - 58.0;
        printf(" o peso ideal para homens com altura de %f é %f.\n", n, p);
    }
    else if (c == 'F' || c == 'f')
    {
        p = (62.1 * n) - 44.7;
        printf(" o peso ideal para mulheres com altura de %f é %f.\n", n, p);
    }
    else
        printf("Não tenho como calcular o peso para sexo '%c'.\n", c);
}

void exerc4_7(void)
{
    float val;
    char c[3];
    memset(c, 0, 3 * sizeof(char));
    printf("Informe o valor em número real: ");
    scanf("%f", &val);
    getchar(); // para descartar o ENTER
    printf("Informe o estado: (MG,SP,RJ,MS): ");
    scanf("%2[^\n]", c); // permite a entrada de string com 2 caracteres e espaço. observe que não usa &c para string
    // toUpperCase
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = c[i] - 32;
        }
    }
    float aju;
    if (strncmp(c, "MG", 2) == 0)
        aju = val * 1.07;
    else if (strncmp(c, "SP", 2) == 0)
        aju = val * 1.17;
    else if (strncmp(c, "RJ", 2) == 0)
        aju = val * 1.15;
    else if (strncmp(c, "MS", 2) == 0)
        aju = val * 1.08;
    else
    {
        printf(" estado %s não contemplado.\n", c);
        return 1;
    }
    printf("o produto será vendido por %f em %s.\n", aju, c);
}

void exerc4_8(void)
{
    int n;
    char s[16];
    memset(s, 0, 16 * sizeof(char));
    printf("Informe a idade do nadador: ");
    scanf("%d", &n);
    if (n >= 5 && n <= 7)
        strcpy(s, "Infantil A");
    else if (n >= 8 && n <= 10)
        strcpy(s, "Infantil B");
    else if (n >= 11 && n <= 13)
        strcpy(s, "Juvenil A");
    else if (n >= 14 && n <= 17)
        strcpy(s, "Juvenil B");
    else if (n >= 18)
        strcpy(s, "Sênior");
    else
        strcpy(s, "Não contemplado");
    printf("%s\n", s);
}

void exerc4_9(void)
{
    float n, o;
    char c;
    printf("Informe a altura em número real: ");
    scanf("%f", &n);
    printf("Informe o peso em número real: ");
    scanf("%f", &o);
    if (n < 1.20)
    {
        if (o < 60)
            c = 'A';
        else if (o >= 60 && o <= 90)
            c = 'D';
        else
            c = 'G';
    }
    else if (n >= 1.2 && n <= 1.7)
    {
        if (o < 60)
            c = 'B';
        else if (o >= 60 && o <= 90)
            c = 'E';
        else
            c = 'H';
    }
    else
    {
        if (o < 60)
            c = 'C';
        else if (o >= 60 && o <= 90)
            c = 'F';
        else
            c = 'I';
    }
    printf(" classificação é %c\n", c);
}

void exerc4_10(void)
{
    int n, o, p, q;
    printf("Informe 3 números inteiros separados por espaço: ");
    scanf("%d %d %d", &n, &o, &p);
    printf("Informe média desejada (1-4): ");
    scanf("%d", &q);
    float n1 = n;
    float o1 = o;
    float p1 = p;
    float r;
    char s[20];
    memset(s, 0, 20 * sizeof(char));
    switch (q)
    {
    case 1:
        r = n1 * o1 * p1;
        strcpy(s, "média geométrica");
        break;
    case 2:
        r = (n1 + pow(2.0, o1) + pow(3, p1)) / 6;
        strcpy(s, "média ponderada");
        break;
    case 3:
        r = 1 / ((1 / n1) + (1 / o1) + (1 / p1));
        strcpy(s, "média harmônica");
        break;
    case 4:
        r = (n1 + o1 + p1) / 3;
        strcpy(s, "média aritmética");
        break;
    default:
        r = 0;
        printf(" cálculo não contemplado.\n");
        return 1;
        break;
    }
    printf(" %s: %f.\n", s, r);
}

void exerc4_11(void)
{
    int n;
    char s[20];
    memset(s, 0, 20 * sizeof(char));
    printf("Informe 0 número do mês (1-12): ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        strcpy(s, "Janeiro");
        break;
    case 2:
        strcpy(s, "Fevereiro");
        break;
    case 3:
        strcpy(s, "Março");
        break;
    case 4:
        strcpy(s, "Abril");
        break;
    case 5:
        strcpy(s, "Maio");
        break;
    case 6:
        strcpy(s, "Junho");
        break;
    case 7:
        strcpy(s, "Julho");
        break;
    case 8:
        strcpy(s, "Agosto");
        break;
    case 9:
        strcpy(s, "Setembro");
        break;
    case 10:
        strcpy(s, "Outubro");
        break;
    case 11:
        strcpy(s, "Novembro");
        break;
    case 12:
        strcpy(s, "Dezembro");
        break;
    default:
        strcpy(s, "Não contemplado");
        break;
    }
    printf(" entrada: %d = saída: %s\n.", n, s);
}

void exerc4_12(void)
{
    int n;
    char s[20];
    memset(s, 0, 20 * sizeof(char));
    printf("Informe 0 número do dia da semana (1-7): ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        strcpy(s, "Domingo");
        break;
    case 2:
        strcpy(s, "Segunda-Feira");
        break;
    case 3:
        strcpy(s, "Terça-Feira");
        break;
    case 4:
        strcpy(s, "Quarta-Feira");
        break;
    case 5:
        strcpy(s, "Quinta-Feira");
        break;
    case 6:
        strcpy(s, "Sexta-Feira");
        break;
    case 7:
        strcpy(s, "Sábado");
        break;
    default:
        strcpy(s, "Não contemplado");
        break;
    }
    printf(" entrada: %d = saída: %s\n.", n, s);
}

void exerc4_13(void)
{
    char c;
    float n, o, p;
    printf("informe operação desejada (+-*/): ");
    c = getchar();
    printf("Informe dois números separados por espaço: ");
    scanf("%f %f", &n, &o);
    switch (c)
    {
    case '+':
        p = n + o;
        break;
    case '-':
        p = n - o;
        break;
    case '*':
        p = n * o;
        break;
    case '/':
    {
        if (o == 0)
        {
            printf("Não pode dividir %f por %f\n", n, o);
            return 1;
        }
        p = n / o;
        break;
    }
    default:
    {
        printf(" operação não contemplada.\n");
        return 1;
        break;
    }
    }
    printf("%f %c %f = %f.\n", n, c, o, p);
}

void exerc4_14(void)
{
    int n;
    printf("Informe um número inteiro: ");
    scanf("%d", &n);
    int d3 = n % 3 == 0;
    int d5 = n % 5 == 0;
    if ((d3 || d5) && (d3 != d5))
    {
        printf(" %d é divisivel por 3 ou 5 mas não pelos dois simultaneamente\n.", n);
    }
    else
    {
        printf(" %d não enquadra na regra.\n", n);
    }
}

void exerc4_15(void)
{
    float a, b, c;
    printf("informe os coeficientes da equação do segundo grau separados por espaços: "),
        scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        printf("Não é equação do segundo grau.\n");
        return 1;
    }
    float d = (b * b) - (4.0 * a * c);
    if (d < 0)
    {
        printf("Não existe raiz.\n");
    }
    else if (d == 0)
    {
        float r = -b / (2.0 * a);
        printf("Raiz única: %f.\n", r);
    }
    else
    {
        float r1 = (-b + d) / (2.0 * a);
        float r2 = (-b - d) / (2.0 * a);
        printf("Raizes %f e %f.\n", r1, r2);
    }
}