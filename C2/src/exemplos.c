#include <stdio.h>

int x = 5; // variável global
void incr()
{
    x++; // acesso a variavel global
}
void func1()
{
    int x; // variavel local
}
void func2()
{
    int x; // variavel local
}
int mainn(int argc, char const *argv[])
{
    if (0 == 1)
    {
        int x;                  // declara a variavel mas nao define o valor
        printf("x = % d\n", x); // x tem uma valor aleatório
        x = 5;                  // define o valor de x como sendo 5
        printf("x = % d\n", x); // x tem valor 5
    }
    if (0 == 1)
    {
        int a = 125;   // valor em decimal
        int b = 0435;  // valor em octal, equivale a 285
        int c = 0x1FA; // valor em hexadecimal, equivale a 506
        printf("Valor de a: %d\n", a);
        printf("Valor de b: %d\n", b);
        printf("Valor de c: %d\n", c);
    }
    if (0 == 1)
    {
        int x = 10;
        // Escrita de um valor inteiro
        printf("%d\n", x);
        float y = 5.0;
        // Escrita de um valor inteiro e outro real
        printf("%d%f\n", x, y);
        // Adicionando espaço entre os valores
        printf("%d %f\n", x, y);
    }
    if (0 == 1)
    {
        int x = 10;
        printf("Total = %d\n", x);
        printf("%d caixas\n", x);
        printf("Total de %d caixas\n", x);
    }
    if (0 == 1)
    {
        char c = 'a';
        int x = 65;
        putchar(c);    // Escreve o caractere 'a'
        putchar('\n'); // Muda de linha
        putchar(x);    // Escreve o valor 65 como caractere
        putchar('\n'); // Muda de linha
    }
    if (0 == 1)
    {
        int x, z;
        float y;
        // Leitura de um valor inteiro
        scanf("%d", &x);
        // Leitura de um valor real
        scanf("%f", &y);
        // Leitura de um valor inteiro e outro real
        scanf("%d%f", &x, &y);
        // Leitura de dois valores inteiros
        scanf("%d%d", &x, &z);
        // Leitura de dois valores inteiros com espaco
        scanf("%d %d", &x, &z);
    }
    if (0 == 1)
    {
        int dia, mes, ano;
        // Leitura de tres valores inteiros
        // com barras entre eles
        scanf("%d/%d/%d", &dia, &mes, &ano);
    }
    if (0 == 1)
    {
        char c;
        c = getchar();
        printf("Caractere: %c\n", c);
        printf("Codigo ASCII: %d\n", c);
    }

    if (0 == 1)
    {
        printf("x = %d\n", x); // acesso a variavel global
        incr();
        printf("x = %d\n", x); // acesso a variável global
    }
    if (0 == 1)
    { // variaveis locais
        int x;
        scanf("%d", &x);
        if (x == 5)
        {
            int y = 1; // y só existe dentro do if
            printf("%d\n", y);
        }
    }
    if (0 == 1)
    {
        printf("Hello World\n");
        printf("Hello\nWorld\n");
        printf("Hello World\n");
        printf("\"Hello World\"\n");
    }
    return 0;
}