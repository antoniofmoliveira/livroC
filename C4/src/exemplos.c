#include <stdio.h>
#include <stdlib.h>

int main_if()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > 10)
        printf("O numero e maior do que 10\n");

    system("pause");
    return 0;
}

int main_if2()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > 10)
        printf("O numero e maior que 10\n");

    /*OU
    if(num > 10){
    printf ("O numero e maior que 10\n");
    }
    */
    system("pause");
    return 0;
}

int main_if_else()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num == 10)
    {
        printf("O numero e igual a 10.\n");
    }
    else
    {
        printf("O numero e diferente de 10.\n");
    }
    system("pause");
    return 0;
}

int main_if_aninhado()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num == 10)
    {
        printf("O numero e igual a 10.\n");
    }
    else
    {
        if (num > 10)
            printf("O numero e maior que 10.\n");
        else
            printf("O numero e menor que 10.\n");
    }
    system("pause");
    return 0;
}

int main_if_else2()
{
    int x, y, z;
    printf("Digite x:");
    scanf("%d", &x);
    printf("Digite y:");
    scanf("%d", &y);
    if (x > y)
        z = x;
    else
        z = y;
    printf("Maior = %d\n", z);
    system("pause");
    return 0;
}

int main_ternario()
{
    int x, y, z;
    printf("Digite x:");
    scanf("%d", &x);
    printf("Digite y:");
    scanf("%d", &y);
    z = x > y ? x : y;
    printf("Maior = %d\n", z);
    system("pause");
    return 0;
}
int main_ternario2()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    (num == 10) ? printf("O numero e igual a 10.\n") : printf("O numero e diferente de 10.\n");
    system("pause");
    return 0;
}

int main_switch()
{
    char ch;
    printf("Digite um simbolo de pontuacao: ");
    ch = getchar();
    switch (ch)
    {
    case '.':
        printf("Ponto.\n");
        break;
    case ',':
        printf("Virgula.\n");
        break;
    case ':':
        printf("Dois pontos.\n");
        break;
    case ';':
        printf("Ponto e virgula.\n");
        break;
    default:
        printf("Nao eh pontuacao.\n");
    }
    system("pause");
    return 0;
}

int main_if_com_switch ()
{
    char ch;
    printf("Digite um simbolo de pontuacao: ");
    ch = getchar();
    if (ch == '.')
        printf("Ponto.\n");
    else if (ch == ',')
        printf("Virgula.\n");
    else if (ch == ':')
        printf("Dois pontos.\n");
    else if (ch == ';')
        printf("Ponto e virgula.\n");
    else
        printf("Nao eh pontuacao.\n");
    system("pause");
    return 0;
}

int main_sem_break()
{
    char ch;
    printf("Digite um simbolo de pontuacao: ");
    ch = getchar();
    switch (ch)
    {
    case '.':
        printf("Ponto.\n");
    case ',':
        printf("Virgula.\n");
    case ':':
        printf("Dois pontos.\n");
    case ';':
        printf("Ponto e virgula.\n");
    default:
        printf("Nao eh pontuacao.\n");
    }
    system("pause");
    return 0;
}

int main_sem_break2()
{
    int num;
    printf("Digite um numero inteiro de 0 a 9: ");
    scanf("%d", &num);
    switch (num)
    {
    case 9:
        printf("Nove\n");
    case 8:
        printf("Oito\n");
    case 7:
        printf("Sete\n");
    case 6:
        printf("Seis\n");
    case 5:
        printf("Cinco\n");
    case 4:
        printf("Quatro\n");
    case 3:
        printf("Tres\n");
    case 2:
        printf("Dois\n");
    case 1:
        printf("Um\n");
    case 0:
        printf("Zero\n");
    }
    system("pause");
    return 0;
}

int main_com_break()
{
    char ch;
    int a, b;
    printf("Digite uma operacao matematica: ");
    ch = getchar();
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &a, &b);
    switch (ch)
    {
    case '+':
    {
        int c = a + b;
        printf("Soma: %d\n", c);
    }
    break;
    case '-':
    {
        int d = a - b;
        printf("Subtracao: %d\n", d);
    }
    break;
    case '*':
    {
        int e = a * b;
        printf("Produto: %d\n", e);
    }
    break;
    case '/':
    {
        int f = a / b;
        printf("Divisao: %d\n", f);
    }
    break;
    default:
        printf("Nao eh operacao.\n");
    }
    system("pause");
    return 0;
}

