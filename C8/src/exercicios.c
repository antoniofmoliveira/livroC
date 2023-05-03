#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "../include/exercicios.h"

struct ponto
{
    int x, y;
};

struct retangulo
{
    struct ponto pse;
    struct ponto pid;
};

struct atleta
{
    char nome[30];
    char esporte[30];
    int idade;
    float altura;
};

struct data
{
    int dia, mes, ano;
};

void getString(char msg[], int n, char t[])
{
    printf("%s", msg);
    setbuf(stdin, NULL);
    char s[50], r[n + 1];
    for (int i = 0; i < 50; i++)
        s[i] = NULL;
    scanf("%50[^\n]", s);
    strncpy(r, s, n);
    {
        char nome[30];
        char esporte[30];
        int idade;
        float altura;
    };
    r[n] = NULL;
    setbuf(stdin, NULL);
    fflush(stdin);
    strcpy(t, r);
}

void exerc8_1(void)
{
    char t[31];
    struct pessoa
    {
        char nome[31];
        char endereco[31];
        struct atleta
        {
            char nome[30];
            char esporte[30];
            int idade;
            float altura;
        };
        int idade;
    };
    struct pessoa p;
    getString("Entre o nome (30): ", 30, p.nome);
    getString("Entre o endereço (30): ", 30, p.endereco);
    printf("Entre a idade (2): ");
    scanf("%2d", &p.idade);
    fflush(stdin);
    printf(" %s tem %d anos e mora na %s.\n", p.nome, p.idade, p.endereco);
}

void exerc8_2(void)
{
    struct ponto p;
    printf("Entre as coordenadas x e y separadas por espaço: ");
    scanf("%2d %2d", &p.x, &p.y);
    fflush(stdin);
    printf(" a distancia do ponto é (%d %d).\n", p.x, p.y);
}

void exerc8_3(void)
{
    struct ponto p1, p2, p3;
    printf("Entre as coordenadas x e y do ponto 1 separadas por espaço: ");
    scanf("%2d %2d", &p1.x, &p1.y);
    printf("Entre as coordenadas x e y do ponto 2 separadas por espaço: ");
    scanf("%2d %2d", &p2.x, &p2.y);
    fflush(stdin);
    p3.x = p1.x - p2.x;
    p3.y = p1.y - p2.y;
    printf(" a distancia do ponto (%d %d) para o ponto (%d %d) é (%d %d).\n", p1.x, p1.y, p2.x, p2.y, p3.x, p3.y);
}

void exerc8_4(void)
{
    struct retangulo ret;
    printf("Entre as coordenadas do ponto superior esquerdo separadas por espaço: ");
    scanf("%2d %2d", &ret.pse.x, &ret.pse.y);
    printf("Entre as coordenadas ponto inferior direito separadas por espaço: ");
    scanf("%2d %2d", &ret.pid.x, &ret.pid.y);
    fflush(stdin);
    int l1 = abs(ret.pse.x - ret.pid.x);
    int l2 = abs(ret.pse.y - ret.pid.y);
    int area = l1 * l2;
    int peri = l1 * 2 + l2 * 2;
    float diag = sqrt(l1 * l1 + l2 * l2);
    printf(" lados= %d %d, área= %d, diagonal = %.2f, perímetro = %d.\n", l1, l2, area, diag, peri);
}
void exerc8_5(void)
{
    struct retangulo ret;
    struct ponto p;
    printf("Entre as coordenadas do ponto superior esquerdo separadas por espaço: ");
    scanf("%2d %2d", &ret.pse.x, &ret.pse.y);
    printf("Entre as coordenadas ponto inferior direito separadas por espaço: ");
    scanf("%2d %2d", &ret.pid.x, &ret.pid.y);
    printf("Entre as coordenadas do ponto separadas por espaço: ");
    scanf("%2d %2d", &p.x, &p.y);
    int l1 = abs(ret.pse.x - ret.pid.x);
    int l2 = abs(ret.pse.y - ret.pid.y);
    int xin = (p.x > ret.pse.x) && (p.x < (ret.pse.x + l1));
    int yin = (p.y > ret.pid.y && (p.y < (ret.pid.y + l2)));
    if (xin && yin)
        printf(" o ponto está dentro do retângulo.\n");
    else
        printf(" o ponto está fora do retângulo.\n");
}

void exerc8_6(void)
{
    struct aluno
    {
        int matricula;
        char nome[30];
        float nota1, nota2, nota3;
    };
    int num_elem = 5;
    struct aluno alunos[5] = {
        {1, "nome 1", 5.0, 10.0, 7.0},
        {2, "nome 2", 7.0, 10.0, 7.5},
        {3, "nome 3", 6.0, 8.0, 7.2},
        {4, "nome 4", 4.0, 9.0, 7.7},
        {5, "nome 5", 8.0, 7.0, 8}};
    float media[num_elem];
    int sel = 0;
    for (int i = 0; i < num_elem; i++)
    {
        media[i] = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media[i] > media[sel])
            sel = i;
    }
    printf(" a maior média foi do aluno '%s', matricula %d, com notas %.2f, %.2f e %.2f.\n",
           alunos[sel].nome, alunos[sel].matricula, alunos[sel].nota1, alunos[sel].nota2, alunos[sel].nota3);
}

void exerc8_7(void)
{
    struct horario
    {
        int hora, min, sec;
    };
    int num_elem = 5;
    struct horario h[5] = {
        {5, 10, 20},
        {7, 15, 32},
        {6, 10, 30},
        {8, 5, 30},
        {1, 22, 45}};
    int v[num_elem];
    int sel = 0;
    for (int i = 0; i < num_elem; i++)
    {
        v[i] = h[i].hora * 60 * 60 + h[i].min * 60 + h[i].sec;
        if (v[i] > v[sel])
            sel = i;
    }
    printf(" a maior hora é %d:%d:%d.\n", h[sel].hora, h[sel].min, h[sel].sec);
}

void exerc8_8(void)
{
    struct pessoa
    {
        char nome[30];
        struct data dt_nasc;
    };
    struct pessoa p[6] = {
        {"pessoa 1", {10, 2, 1964}},
        {"pessoa 2", {12, 5, 1961}},
        {"pessoa 3", {8, 8, 1965}},
        {"pessoa 4", {22, 5, 1998}},
        {"pessoa 5", {2, 6, 1963}},
        {"pessoa 6", {5, 1, 1972}},
    };
    int vm[6];
    int seln = 0;
    int selv = 0;
    time_t tempo;
    struct tm *infotempo;
    time(&tempo);
    infotempo = localtime(&tempo);
    int anoatu = infotempo->tm_year + 1900;
    for (int i = 0; i < 6; i++)
    {
        vm[i] = (anoatu)-p[i].dt_nasc.ano;
        printf("%d\n", vm[i]);
        if (vm[i] < vm[seln])
            seln = i;
        if (vm[i] > vm[selv])
            selv = i;
    }

    printf(" a pessoa mais nova é '%s'.\n", p[seln].nome);
    printf(" a pessoa mais velha é '%s'.\n", p[selv].nome);
}

void exerc8_9(void)
{
    int num_elem = 5;
    struct atleta a[5] = {
        {"nome 1", "esporte 1", 30, 1.75},
        {"nome 2", "esporte 1", 18, 1.95},
        {"nome 3", "esporte 2", 25, 1.65},
        {"nome 4", "esporte 2", 22, 1.55},
        {"nome 5", "esporte 3", 32, 1.88},
    };
    int sela = 0;
    int selv = 0;
    for (size_t i = 0; i < num_elem; i++)
    {
        if (a[i].altura > a[sela].altura)
            sela = i;
        if (a[i].idade > a[selv].idade)
            selv = i;
    }
    printf(" o atleta mais alto é '%s'.\n", a[sela].nome);
    printf(" o atleta mais velho é '%s'.\n", a[selv].nome);
}

int compare(const void *a, const void *b)
{
    return ((*(struct atleta *)b).idade - (*(struct atleta *)a).idade);
}

void exerc8_10(void)
{
    int num_elem = 5;
    struct atleta a[5] = {
        {"nome 1", "esporte 1", 30, 1.75},
        {"nome 2", "esporte 1", 18, 1.95},
        {"nome 3", "esporte 2", 25, 1.65},
        {"nome 4", "esporte 2", 22, 1.55},
        {"nome 5", "esporte 3", 32, 1.88},
    };
    qsort(a, num_elem, sizeof(a[0]), compare);
    for (int i = 0; i < num_elem; i++)
    {
        printf(" %s %d\n", a[i].nome, a[i].idade);
    }
}

int isBis(int ano)
{
    return (ano % 4 == 0 && ano % 100 == 0 && ano % 400 != 0);
}
int numDias(int ano, int mes, int dia)
{
    int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int r = 0;
    if (isBis(ano))
        m[1] = 29;
    for (int i = mes - 1; i >= 0; i--)
        r += m[i];
    return r + dia;
}
void exerc8_11(void)
{
    struct data d1 = {10, 2, 1964}, d2 = {12, 3, 1964};
    int in = d1.ano;
    int fn = d2.ano;
    int di = -numDias(d1.ano, d1.mes, d1.dia);
    int df = numDias(d2.ano, d2.mes, d2.dia);
    if (d1.ano * 10000 + d1.mes * 100 + d1.dia > d2.ano * 10000 + d2.mes * 100 + d2.dia)
    {
        in = d2.ano;
        fn = d1.ano;
        di = -numDias(d2.ano, d2.mes, d2.dia);
        df = numDias(d1.ano, d1.mes, d1.dia);
    }
    int r = 0;
    for (int i = in; i < fn; i++)
        r += 365 + isBis(i);
    printf("%d %d %d\n", r, di, df);
    r = r + df + di;
    printf("passaram %d dias.\n", r);
}

void exerc8_12(void)
{
    enum semana
    {
        Domingo = 1,
        Segunda,
        Terca,
        Quarta,
        Quinta,
        Sexta,
        Sabado
    };

    char diasemana[7][15] = {
        "Domingo",
        "Segunda-Feira",
        "Terca-Feira",
        "Quarta-Feira",
        "Quinta-Feira",
        "Sexta-Feira",
        "Sabado"

    };
    int dia;
    printf("Entre o dia da semana (1-7): ");
    scanf("%1d", &dia);
    if (dia < Domingo || dia > Sabado)
        printf(" dia da semana inexistente.\n");
    else
        printf(" escolheu %s.\n", diasemana[dia - 1]);
}

void exerc8_13(void)
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
    struct smes meses[12] =
        {
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
    int mes;
    printf("Entre o mês (1-12): ");
    scanf("%2d", &mes);
    if (mes < Janeiro || mes > Dezembro)
        printf(" mês inexistente.\n");
    else
        printf(" o mês de %s tem %d dias.\n", meses[mes - 1].nome, meses[mes - 1].dias);
}

void exerc8_14(void)
{
    struct sprod
    {
        char nome[20];
        float valor;
    };
    enum eprod
    {
        prod1 = 1,
        prod2,
        prod3,
        prod4,
        prod5,
        prod6,
        prod7,
        prod8,
        prod9,
        prod10,
    };
    struct sprod prods[10] = {
        {"produto 1", 10.0},
        {"produto 2", 9.0},
        {"produto 3", 8.0},
        {"produto 4", 7.0},
        {"produto 5", 1.0},
        {"produto 6", 2.0},
        {"produto 7", 3.0},
        {"produto 8", 4.0},
        {"produto 9", 5.0},
        {"produto 10", 6.0},
    };
    int prod;
    printf("Entre o produto (1-10): ");
    scanf("%2d", &prod);
    if (prod < prod1 || prod > prod10)
        printf(" produto inexistente.\n");
    else
        printf(" o '%s' custa %.2f.\n", prods[prod - 1].nome, prods[prod - 1].valor);
}

void exerc8_15(void)
{
    union intchar
    {
        int inteiro;
        char caracter;
    };
    union intchar t;
    t.inteiro = 580;
    printf(" para o inteiro %d o caracter ficou '%c'.\n", t.inteiro, t.caracter);
}
