#include <stdio.h>
#include <stdlib.h>

// instrução com objetivo de imprimir na tela um dado do tipo char com valor A. - %c imprime o caractere no alfabeto ASCII.
// instrução com objetivo de imprimir na tela um dado do tipo char com valor A. - %d imprime o número do caractere no alfabeto ASCII.
// EX: printf("%c (espaço) %d", caracter, caracter1);


int main()
{
    char caracter, caracter1;
    caracter = 'A';
    caracter1 = 'B';
    printf("%c %d", caracter, caracter1);
    return(0);
}
