#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/exercicios.h"

void exerc7_1(void)
{
    int slen = 10;
    char s[slen];
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    printf(" digitou: '%s'.\n", s);
}

void exerc7_2(void)
{
    int slen = 10;
    char s[slen];
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    char r[5];
    strncpy(r, s, 4);
    printf(" digitou: '%s'.\n", s);
    printf(" 4 primeiros char: '%4s'.\n", r);
}

void exerc7_3(void)
{
    int slen = 10;
    char s[slen];
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    printf(" digitou: '%s'.\n", s);
    printf(" são %d caracteres.\n", strlen(s));
}

void exerc7_4(void)
{
    int slen = 10;
    char s[slen];
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    int l = strlen(s);
    printf(" digitou: '%s'.\n", s);
    printf(" ao contrário é: '");
    for (int i = l; i >= 0; i--)
        printf("%c", s[i]);
    printf("'.\n");
}

void exerc7_5(void)
{
    int slen = 10;
    char s[slen], r[slen];
    for (int i = 0; i < slen; i++)
    {
        s[i] = NULL;
        r[i] = NULL;
    }
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    int l = strlen(s), p = 0;
    printf(" digitou: '%s'.\n", s);
    for (int i = l - 1; i >= 0; i--)
        r[p++] = s[i];
    strcpy(s, r);
    printf(" ao contrário é: '%s'.\n", s);
}

void exerc7_6(void)
{
    int slen = 10, n = 0, o = 0;
    char s[slen], r;
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    setbuf(stdin, NULL);
    printf("Escreva o caracter substituto: ");
    r = getchar();
    setbuf(stdin, NULL);
    for (int i = 0; i < strlen(s); i++)
    {
        char c = s[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        {
            n++;
            s[i] = r;
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {
        char c = s[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
            o++;
    }
    printf(" quantidade de vogais antes: %d.\n", n);
    printf(" após substuição das vogais: '%s'.\n", s);
    printf(" quantidade de vogais depois: %d.\n", o);
}

void exerc7_7(void)
{
    int slen = 10;
    char s[slen], r[slen];
    for (int i = 0; i < slen; i++)
    {
        s[i] = NULL;
        r[i] = NULL;
    }
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    int l = strlen(s), p = 0;
    printf(" digitou: '%s'.\n", s);
    for (int i = l - 1; i >= 0; i--)
        r[p++] = s[i];
    int n = strcmp(s, r);
    if (n == 0)
        printf(" '%s' é palíndromo.\n", s);
    else
        printf(" '%s' não é palíndromo.\n", s);
}

void exerc7_8(void)
{
    int slen = 10;
    char s[slen], r[slen];
    for (int i = 0; i < slen; i++)
    {
        s[i] = NULL;
        r[i] = NULL;
    }
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    setbuf(stdin, NULL);
    printf("Escreva a string a ser procurada na anterior: ");
    scanf("%10s", r);
    setbuf(stdin, NULL);
    char *pch;
    pch = strstr(s, r);
    if (pch != NULL)
        printf(" '%s' está contida em '%s'.\n", r, s);
    else
        printf(" '%s' não está contida em '%s'.\n", r, s);
}

void exerc7_9(void)
{
    int slen = 10;
    char s[slen], r[slen], t[slen];
    for (int i = 0; i < slen; i++)
    {
        s[i] = NULL;
        r[i] = NULL;
        t[i] = NULL;
    }
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    setbuf(stdin, NULL);
    printf("Escreva a string a ser procurada na anterior: ");
    scanf("%10s", r);
    setbuf(stdin, NULL);
    char *pch;
    pch = strstr(s, r);
    if (pch == NULL)
        printf(" '%s' não está contida em '%s'.\n", r, s);
    else
    {
        int n = strlen(s);
        long l1 = &s;
        long l2 = pch;
        long l3 = strlen(r);
        int pos1 = l2 - l1 + l3;
        int pos2 = 0;
        int c = 1;
        while (pos1 < s)
        {
            for (int i = pos1; i < strlen(s); i++)
                t[pos2++] = s[i];
            t[pos2] = NULL;
            strcpy(s, t);
            pch = strstr(s, r);
            if (pch != NULL)
            {
                c++;
                l2 = pch;
                pos1 = l2 - l1 + l3;
                pos2 = 0;
                for (int i = 0; i < slen; i++)
                    t[i] = NULL;
            }
            else
                break;
        }
        printf(" '%s' encontrado %d vezes.\n", r, c);
    }
}
void exerc7_10(void)
{
    int slen = 10;
    char s[slen];
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    setbuf(stdin, NULL);
    for (int i = 0; i < strlen(s); i++)
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    printf(" convertido para '%s'.\n", s);
}

void exerc7_11(void)
{
    int slen = 10;
    char s[slen];
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    setbuf(stdin, NULL);
    for (int i = 0; i < strlen(s); i++)
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    printf(" convertido para '%s'.\n", s);
}

void exerc7_12(void)
{
    int slen = 10;
    char s[slen];
    float n;
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva mercadoria até 10 caracteres: ");
    scanf("%10s", s);
    setbuf(stdin, NULL);
    printf("Informe o valor da mercadoria: ");
    scanf("%f", &n);
    float o = n * 0.1;
    float p = n - o;
    printf(" %s custa %.2f, com desconto de %.2f ficará por %.2f.\n", s, n, o, p);
}

void exerc7_13(void)
{
    int slen = 10, n, o;
    char s[slen];
    for (int i = 0; i < slen; i++)
        s[i] = NULL;
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    setbuf(stdin, NULL);
    printf("Informe segmento de %s a ser impresso: ", s);
    scanf("%d %d", &n, &o);
    printf(" ");
    for (int i = n; i >= 0 && i < strlen(s) && i <= o; i++)
        printf("%c", s[i]);
    printf("\n");
}

void exerc7_14(void)
{
    char s[] = "a ligeira raposa marrom saltou sobre o cachorro cansado";
    printf("     String: %s\n", s);
    printf("Nova String: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            s[i] += 3;
            if (s[i] >= 91 && s[i] <= 93)
                s[i] = 64 + s[i] % 90;
            if (s[i] >= 123 && s[i] <= 125)
                s[i] = 122 + s[i] % 125;
        }
        printf("%c", s[i]);
    }
    printf("\n");
}

void exerc7_15(void)
{
    int slen = 10;
    char s[slen], t[slen];
    for (int i = 0; i < slen; i++)
    {
        s[i] = NULL;
        t[i] = NULL;
    }
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", s);
    setbuf(stdin, NULL);
    printf("Escreva outra string até 10 caracteres: ");
    scanf("%10s", t);
    setbuf(stdin, NULL);
    int n = strcmp(s, t);
    if (n < 0)
        printf(" %s %s\n", s, t);
    else if (n > 0)
        printf(" %s %s\n", t, s);
    else
        printf(" %s\n", s);
}