#include <stdio.h>
#include <time.h>

void testa_tempo(void)
{
    // vai receber data/hora atual em formato numerico
    time_t tempo;
    // vai receber data/hora estruturada
    struct tm *infotempo;
    // buffer string para saida
    char texto[80];
    // coloca data/hora atual em tempo
    time(&tempo);
    // converte termpo para data/hora estruturada
    infotempo = localtime(&tempo);
    // formata saida para hora
    strftime(texto, 80, "Hora atual %I:%M%p.", infotempo);
    // imprime na tela
    puts(texto);
    // formata saida para data
    strftime(texto, 80, "Data: %A, %d/%b/%Y", infotempo);
    // imprime na tela
    puts(texto);
}