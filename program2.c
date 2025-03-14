#include <stdio.h>
#include <stdlib.h>

// instrução com objetivo de imprimir na tela um dado do tipo int com valor x, sendo x um valor digitado pelo usuário.

int main()
{
    int x;
    printf("Digite um número inteiro:");
    scanf("%d", &x);

    printf("Valor de x: %d", x);
    return(0);

    }

