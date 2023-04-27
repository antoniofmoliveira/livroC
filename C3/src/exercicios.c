#include <stdio.h>
#include <time.h>
// para usar math precisa ajustar a linha "LFLAGS = -lm" no Makefile
#include <math.h>
#include "../include/exercicios.h"

void exerc3_1(void)
{
    int n = 0;
    printf("Informe um inteiro: ");
    scanf("%d", &n);
    int ant = n - 1;
    int suc = n + 1;
    printf(" antecessor: %d\n", ant);
    printf(" sucessor: %d\n", suc);
}
void exerc3_2(void)
{
    float n = 0.0;
    printf("Informe um número real: ");
    scanf("%f", &n);
    float f = n / 5;
    printf(" a quinta parte de %f é %f\n", n, f);
}
void exerc3_3(void)
{
    int n1 = 0, n2 = 0, n3 = 0;
    printf("Informe 3 números inteiros separados por espaço: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int s = n1 + n2 + n3;
    printf(" a soma de %d, %d e %d é %d\n", n1, n2, n3, s);
}
void exerc3_4(void)
{
    float n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0;
    printf("Informe 4 números reais separados por espaço: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    float m = (n1 + n2 + n3 + n4) / 4.0; // observe o que acontece se colocar int m = ... o compilador não avisa nada
    printf(" a média de %f, %f, %f e %f é %f\n", n1, n2, n3, n4, m);
}
void exerc3_5(void)
{
    time_t tempo;
    struct tm *infotempo;
    time(&tempo);
    infotempo = localtime(&tempo);
    int ano = infotempo->tm_year;
    int n = 0;
    printf("Qual a sua idade: ");
    scanf("%d", &n);
    int ano_nasc = 1900 + ano - n;
    printf(" você nasceu em: %d\n", ano_nasc);
}
void exerc3_6(void)
{
    float n = 0.0;
    printf("Informe a velocidade em km/h: ");
    scanf("%f", &n);
    float m = n / 36.0;
    printf(" %fkm/h = %fm/s\n", n, m);
}
void exerc3_7(void)
{
    float n = 0.0;
    float c = 0.0;
    printf("Informe o valor em reais: ");
    scanf("%f", &n);
    printf("Informe a cotação do real em dóla: ");
    scanf("%f", &c);
    float m = n / c;
    printf("R$ %f = US$ %f\n", n, m);
}
void exerc3_8(void)
{
    float n = 0.0;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &n);
    float m = n * (9.0 / 5.0) + 32.0;
    printf(" %f °C = %f °F\n", n, m);
}
void exerc3_9(void)
{
    float n = 0.0;
    float pi = 3.141592;
    printf("Informe o angulo em graus: ");
    scanf("%f", &n);
    float m = n * pi / 180.0;
    printf(" %f° = %f Rad\n", n, m);
}
void exerc3_10(void)
{
    float tot = 780000.00;
    float val1 = tot * 46.0 / 100.0;
    float val2 = tot * 32.0 / 100.0;
    float val3 = tot - val1 - val2;
    printf("O primeiro receberá %f\n", val1);
    printf("O segundo  receberá %f\n", val2);
    printf("O terceiro receberá %f\n", val3);
    printf("Totalizando         %f\n", val1 + val2 + val3);
}
void exerc3_11(void)
{
    float n = 0.0;
    float pi = 3.141592; // M_PI
    printf("Informe o raio do círculo: ");
    scanf("%f", &n);
    float m = pi * n * n;
    printf(" a área do circulo é %f", m);
}
void exerc3_12(void)
{
    float n = 0.0;
    float h = 0.0;
    float pi = 3.141592; // M_PI
    printf("Informe o raio do cilindro: ");
    scanf("%f", &n);
    printf("Informe a altura do cilindro: ");
    scanf("%f", &h);
    float m = pi * n * n * h;
    printf(" o volume do cilidro é %f", m);
}
void exerc3_13(void)
{
    float n1 = 0.0, n2 = 0.0;
    printf("Informe 2 catetos em números reais separados por espaço: ");
    scanf("%f %f", &n1, &n2);
    double m = sqrt(n1 * n1 + n2 * n2);
    printf(" a hipotenusa é %f\n", m);
}

void exerc3_14(void)
{
    char n = 32;
    int offset = 32;
    printf("Informe uma letra maiúscula entre A e Z: ");
    scanf("%c", &n);
    if (n < 'A' || n > 'Z')
    {
        printf("Letra inválida.\n");
        return 0;
    }
    char c = n + 32;
    printf(" letra minúscula é: %c\n", c);
}
void exerc3_15(void)
{
    char n1, n2, n3;
    printf("Entre um número de 3 digitos:");
    n1 = getchar();
    n2 = getchar();
    n3 = getchar();
    printf("O inverso de %c%c%c é %c%c%c.\n", n1, n2, n3, n3, n2, n1);
}
void exerc3_16(void)
{
    int n = 0;
    printf("Informe um inteiro: ");
    scanf("%d", &n);
    int met = n >> 1;
    int dob = n << 1;
    printf(" metade: %d\n", met);
    printf(" dobro : %d\n", dob);
}
void exerc3_17(void)
{
    int n;
    printf("Informe um inteiro: ");
    scanf("%d", &n);
    unsigned char ori = n;
    unsigned char com = ~ori;
    printf(" complemento bit a bit de %d (%b) é %d (%b) \n", ori, ori, com, com);
}
void exerc3_18(void)
{
    int n = 0, m = 0;
    printf("Informe um inteiro e o descolamento desejado: ");
    scanf("%d %d", &n, &m);
    int rig = n >> m;
    int lef = n << m;
    printf(" %d >> %d = %d\n", n, m, rig);
    printf(" %d << %d = %d\n", n, m, lef);
}
void exerc3_19(void)
{
    int n = 0, m = 0;
    printf("Informe dois inteiros separados por espaço: ");
    scanf("%d %d", &n, &m);
    int oex = n ^ m;
    int oub = n | m;
    int ebi = n & m;
    printf(" %d ^ %d = %d\n", n, m, oex);
    printf(" %d | %d = %d\n", n, m, oub);
    printf(" %d & %d = %d\n", n, m, ebi);
}