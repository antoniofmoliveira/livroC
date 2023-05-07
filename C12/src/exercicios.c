#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/exercicios.h"

void exerc12_1(void)
{
    FILE *arq;
    char c;
    int n = 0;
    arq = fopen("arq.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    while (c != EOF)
    {
        c = fgetc(arq);
        // printf("%d ",c);
        if (c == 13 || c == 10)
            n++;
    }
    fclose(arq);
    printf(" arquivo contém %d linhas.\n", n);
}

void exerc12_2(void)
{
    FILE *arq, *arq2, *arq3;
    char c;
    int n = 0;
    arq = fopen("arq.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo arq.txt");
        exit(1);
    }
    arq2 = fopen("arq2.txt", "r");
    if (arq2 == NULL)
    {
        printf("Erro na abertura do arquivo arq2.txt");
        exit(1);
    }
    arq3 = fopen("arq3.txt", "w");
    if (arq2 == NULL)
    {
        printf("Erro na abertura do arquivo arq3.txt");
        exit(1);
    }
    while (c != EOF)
    {
        c = fgetc(arq);
        if (c != EOF)
            fputc(c, arq3);
    }
    c = ' ';
    while (c != EOF)
    {
        c = fgetc(arq2);
        if (c != EOF)
            fputc(c, arq3);
    }
    fclose(arq);
    fclose(arq2);
    fclose(arq3);
}

void exerc12_3(void)
{
    FILE *arq, *arq2;
    char c;
    int n = 0;
    arq = fopen("arq3.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo arq3.txt");
        exit(1);
    }
    arq2 = fopen("arq4.txt", "w");
    if (arq2 == NULL)
    {
        printf("Erro na abertura do arquivo arq4.txt");
        exit(1);
    }
    while (c != EOF)
    {
        c = fgetc(arq);
        if (c >= 97 && c <= 122)
            c -= 32;
        if (c != EOF)
            fputc(c, arq2);
    }
    fclose(arq);
    fclose(arq2);
}

void exerc12_4(void)
{
    FILE *arq;
    char str[500];
    char *result;
    char arg[] = "nome";
    int n = 0;
    arq = fopen("arq.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    while (result != NULL)                  // a primeira versão copiava o restante da linha para outra variavel.
    {                                       // esta versão usa ponteiro para o restante da linha.
        result = fgets(str, 500, arq);      // carrega linha
        if (result == NULL)                 // final do arquivo
            break;                          // termina loop
        char *z = &str, *y = z;             // z e y contém ponteiro para o início da linha lida
        for (int i = 0; i < strlen(z); i++) // loop no restante da linha
        {                                   //
            z += i;                         // atualiza incio do restante da linha a ser pesquisada
            char *j = strstr(z, arg);       // j tem um ponteio para o primeiro caracter de arg se encontrado no restante da linha
            if (j != NULL)                  // encontrou arg em no restante da linha
            {                               //
                z = j + strlen(arg);        // atualiza restante da linha pulando arg encontrado
                n++;                        // contador de encontros
                i += j - y + strlen(arg);   // pula caracteres do laço for para o inicio do restante da linha
            }                               //
        }                                   //
    }
    printf(" encontrou %d vezes.\n", n);
    fclose(arq);
}

void tobin(int n, char a[])
{
    if (n == 0)
        return;
    else
    {
        tobin(n / 2, a);
        // printf("%d", n % 2);
        if (n % 2 == 0)
            strcat(a, "0");
        else
            strcat(a, "1");
    }
}

char *formatabin(char a[], char b[])
{
    char t[8];
    int n = strlen(a);
    int i = 0, u = 0;
    for (i = 0; i < 8 - n; i++)
        t[i] = '0';
    for (; i < 8; i++)
        t[i] = a[u++];
    strcpy(b, t);
    return t;
}

void exerc12_5(void)
{
    FILE *arq;
    char c;
    int n = 0;
    arq = fopen("arqbin.txt", "w");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    while (n >= 0)
    {
        printf("Digite um numero positivo para conversão ou negativo para sair: ");
        scanf("%2d", &n);
        if (n < 0)
            break;
        char c[20];
        for (int i = 0; i < 20; i++)
            c[i] = NULL;
        tobin(n, c);
        char d[8];
        formatabin(c, d);
        fputs(d, arq);
        fputc(13, arq);
    }
    fclose(arq);
}
void exerc12_6a(void)
{
    FILE *arq;
    arq = fopen("lista.txt", "w");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    char nome[30] = "antonio francisco";
    int qt = 1;
    float val = 10.55;
    fprintf(arq, "%29s %5d %f11\n", nome, qt, val);
    fclose(arq);
}

void exerc12_6(void)
{
    FILE *arq;
    char *result;
    arq = fopen("listacompra.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    char nome[30];
    int qt;
    float val;
    while (!feof(arq))
    {
        fscanf(arq, "%29[^\n] %5d %11f\n", nome, &qt, &val);
        printf("%s %d %f\n", nome, qt, val);
    }
    fclose(arq);
}

void exerc12_7(void)
{
    FILE *arq;
    arq = fopen("telefones.txt", "w");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    char telefone[14];
    char nome[30];
    while (strcmp(telefone, "0") != 0)
    {
        printf("nome: ");
        scanf("%29[^\n]", nome);
        getchar();
        printf("telefone: ");
        scanf("%13[^\n]", telefone);
        getchar();
        if (strcmp(telefone, "0") == 0)
            break;
        fprintf(arq, "%s\n%s\n", nome, telefone);
    }
    fclose(arq);
}

void exerc12_8(void)
{
    FILE *arq, *arq2;
    arq = fopen("nomesedtnasc.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    arq2 = fopen("nomeseidade.txt", "w");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    char nome[30];
    int dia, mes, ano, anoatu;
    printf("Informe ano atual: ");
    scanf("%d", &anoatu);
    getchar();
    while (!feof(arq))
    {
        fscanf(arq, "%s %d %d %d\n", nome, &dia, &mes, &ano);
        int idade = anoatu - ano;
        fprintf(arq2, "%s %d\n", nome, idade);
    }
    fclose(arq);
    fclose(arq2);
}

int quantas_vogais(char *nmarq)
{
    FILE *arq;
    char c;
    int n = 0;
    arq = fopen(nmarq, "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    while (c != EOF)
    {
        c = fgetc(arq);
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
            n++;
    }
    fclose(arq);
    return n;
}
void exerc12_9(void)
{
    char arq[] = "arq.txt";
    int n = quantas_vogais(arq);
    printf(" arquivo contém %d vogais.\n", n);
}

void exerc12_10(void)
{
    FILE *arq;
    char c;
    arq = fopen("matriz10.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int nlin = 0, ncol = 0;
    fscanf(arq, "%d\n", &nlin);
    fscanf(arq, "%d\n", &ncol);
    int *p;
    p = (int *)malloc(nlin * ncol * sizeof(int));
    for (int i = 0; i < nlin; i++)
        for (int j = 0; j < ncol; j++)
            fscanf(arq, "%d\n", &p[i * ncol + j]);
    for (int i = 0; i < nlin; i++)
    {
        for (int j = 0; j < ncol; j++)
            printf("%2d ", p[i * ncol + j]);
        printf("\n");
    }
    fclose(arq);
    free(p);
}

void grava_matriz(int m[][10], int nlin, int ncol)
{
    FILE *arq;
    char c;
    arq = fopen("matriz.txt", "w");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    for (int i = 0; i < nlin; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            fprintf(arq, "%2d ", m[i][j]);
        }
        fprintf(arq, "\n");
    }
    fclose(arq);
}

void exerc12_11(void)
{
    int m[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            m[i][j] = i * 10 + j;
        }
    }
    grava_matriz(m, 10, 10);
}

void grava_vetor(int m[], int npos)
{
    FILE *arq;
    char c;
    arq = fopen("vetor.txt", "w");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    for (int i = 0; i < npos; i++)
        fprintf(arq, "%2d\n", m[i]);
    fclose(arq);
}

void exerc12_12(void)
{
    int v[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    grava_vetor(v, 10);
}

struct aluno
{
    int matricula;
    char nome[10];
    float nota1, nota2, nota3;
};

void exerc12_13(void)
{
    FILE *arq;
    char c;
    arq = fopen("notasalunos.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    struct aluno a;
    while (!feof(arq))
    {
        fscanf(arq, "%d %s %f %f %f\n", &(a.matricula), a.nome, &(a.nota1), &(a.nota2), &(a.nota3));
        printf("%d %s %.1f %.1f %.1f\n", a.matricula, a.nome, a.nota1, a.nota2, a.nota3);
    }
    fclose(arq);
}

void exerc12_14(void)
{
    FILE *arq;
    char c, l;
    int n = 0;
    arq = fopen("arq.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    while (c != EOF)
    {
        c = fgetc(arq);
        // printf("%d ",c);
        if ((c == 13 || c == 10 || c == ' ') && (l != 13 && l != 10 && l != ' '))
            n++;
        l = c;
    }
    fclose(arq);
    printf(" arquivo contém %d palavras.\n", n);
}

void exerc12_15(void)
{
    FILE *arq;
    char c;
    int n = 0;
    int v[128];
    for (int i = 0; i < 128; i++)
        v[i] = 0;
    arq = fopen("arq.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    while (c != EOF)
    {
        c = fgetc(arq);
        if (c >= 32 && c <= 127)
            v[c]++;
    }
    fclose(arq);
    for (int i = 32; i < 128; i++)
    {
        printf("'%c'=%3d  ", i, v[i]);
        n++;
        if (n % 10 == 0)
            printf("\n");
    }
    printf("\n");
}

void exerc12_16(void)
{
    FILE *arq;
    char c;
    int n = 0;
    int v[100];
    for (int i = 0; i < 100; i++)
        v[i] = i * 2;
    arq = fopen("arq.bin", "wb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int t = fwrite(v, sizeof(int), 100, arq);
    if (t != 100)
    {
        printf("Erro na escrita do arquivo!");
        exit(1);
    }
    fclose(arq);
}

void exerc12_17(void)
{
    FILE *arq;
    char c;
    int n = 0;
    int v[100];
    for (int i = 0; i < 100; i++)
        v[i] = 0;
    arq = fopen("arq.bin", "rb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int t = fread(v, sizeof(int), 100, arq);
    if (t != 100)
    {
        printf("Erro na leitura do arquivo!");
        exit(1);
    }
    n = 0;
    for (int i = 0; i < 100; i++)
    {
        printf(" %3d ", v[i]);
        n++;
        if (n > 0 && n % 10 == 0)
            printf("\n");
    }

    fclose(arq);
}

void exerc12_18a(void)
{
    FILE *arq;
    char c;
    int n = 50;
    int v[50];
    for (int i = 0; i < 50; i++)
        v[i] = i * 2;
    arq = fopen("arq2.bin", "wb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int t = fwrite(&n, sizeof(int), 1, arq);
    t = fwrite(v, sizeof(int), 50, arq);
    if (t != 50)
    {
        printf("Erro na escrita do arquivo!");
        exit(1);
    }
    fclose(arq);
}

void exerc12_18(void)
{
    FILE *arq;
    char c;
    int n = 0;
    arq = fopen("arq2.bin", "rb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int t = fread(&n, sizeof(int), 1, arq);
    int *p;
    p = (int *)malloc(n * sizeof(int));
    t = fread(p, sizeof(int), n, arq);
    if (t != n)
    {
        printf("Erro na leitura do arquivo!");
        exit(1);
    }
    int ma, me;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ma = p[i];
            me = p[i];
        }
        else
        {
            if (p[i] > ma)
                ma = p[i];
            if (p[i] < me)
                me = p[i];
        }
    }
    fclose(arq);
    free(p);
    printf("maior = %d, menor = %d\n", ma, me);
}

struct atleta
{
    char nome[30];
    char esporte[30];
    int idade;
    float altura;
};

void exerc12_19(void)
{
    struct atleta a[5] = {
        {"nome 1", "esporte 1", 25, 1.78},
        {"nome 2", "esporte 1", 26, 1.88},
        {"nome 3", "esporte 2", 27, 1.98},
        {"nome 4", "esporte 2", 30, 1.58},
        {"nome 5", "esporte 3", 20, 1.68},
    };
    FILE *arq;
    char c;
    int n = 5;
    arq = fopen("arqatleta.bin", "wb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int t = fwrite(&n, sizeof(int), 1, arq);

    t = fwrite(a, sizeof(struct atleta), n, arq);
    if (t != 5)
    {
        printf("Erro na escrita do arquivo!");
        exit(1);
    }
    fclose(arq);
}

void exerc12_20(void)
{
    FILE *arq;
    char c;
    int n = 0;
    arq = fopen("arqatleta.bin", "rb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int t = fread(&n, sizeof(int), 1, arq);
    struct atleta *p;
    p = (int *)malloc(n * sizeof(struct atleta));
    t = fread(p, sizeof(struct atleta), n, arq);
    if (t != n)
    {
        printf("Erro na leitura do arquivo!");
        exit(1);
    }
    int ma = 0, mv = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].altura > p[ma].altura)
            ma = i;
        if (p[i].idade > p[mv].idade)
            mv = i;
    }
    fclose(arq);
    printf("maior = %s, mais velho = %s\n", p[ma].nome, p[mv].nome);
    free(p);
}
