#include <stdio.h>
#include "../include/exercicios.h"

void exerc2_1(void)
{
    printf("Início do programa\nFim\n");
}

void exerc2_2(void)
{
    int n = 0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    printf(" informou número %d\n", n);
}

void exerc2_3(void)
{
    int n = 0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    printf(" valor lido %d\n", n);
}

void exerc2_4(void)
{
    int n = 0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    float o = n;
    printf(" valor lido %f\n", o); // com int imprime 0.000000. com conversão para float imprime o inteiro com casas decimais.
}

void exerc2_5(void)
{
    float n = 0.0;
    printf("Informe um numero real: ");
    scanf("%f", &n);
    int o = n;
    printf(" valor lido %d\n", o); // com float imprime numero aleatório. com conversão para int trunca as casas decimais.
}

void exerc2_6(void)
{
    float n;
    printf("Informe um numero real: ");
    scanf("%f", &n);
    double o = n;
    printf(" valor lido %e\n", o); // com double direto não funcionou, somente com float. tem que fazer conversão intermediária.
}

void exerc2_7(void)
{
    char n;
    printf("Informe um caractere: ");
    n = getchar();
    printf(" informou %c cujo valor é %d\n", n, n);
}

void exerc2_8(void)
{
    int n, o;
    printf("Informe dois numeros inteiros separados por espaço: ");
    scanf("%d %d", &n, &o);
    printf(" informou números %d e %d\n", o, n);
}

void exerc2_9(void)
{
    float n, o;
    printf("Informe dois numeros reais separados por espaço: ");
    scanf("%f %f", &n, &o);
    printf(" informou números %f e %f\n", o, n);
}

void exerc2_10(void)
{
    int n, o, p;
    printf("Informe dia, mes e ano separados por espaço: ");
    scanf("%d %d %d", &n, &o, &p);
    printf(" informou a data %d\\%d\\%d\n", n, o, p);
}

#define vfloat 10.523

void exerc2_11(void)
{
    float n = vfloat;
    printf("Valor da constante %f\n", n);
}

const float vfloat2 = 10.523;

void exerc2_12(void)
{
    printf("Valor da constante %f\n", vfloat2);
}

void exerc2_13(void)
{
    char n;
    printf("Informe um caracter: ");
    n = getchar();
    printf(" informado caracter \"%c\".\n", n);
}

void exerc2_14(void)
{
    char n, o, p;
    printf("Informe três caracteres: ");
    n = getchar();
    o = getchar();
    p = getchar();
    printf(" informadoS caracteres:\n \"%c\".\n \"%c\".\n \"%c\".\n", n, o, p);
}

void exerc2_15(void)
{
    char n;
    int o;
    float p;
    printf("Informe 1 caracter: ");
    n = getchar();
    printf("Informe 1 número inteiro: ");
    scanf("%d", &o);
    printf("Informe 1 número real: ");
    scanf("%f", &p);
    printf("Informados:\n");
    printf(" %c %d %f\n", n, o, p);
    printf(" %c\t%d\t%f\n", n, o, p);
    printf(" %c\n %d\n %f\n", n, o, p);
}