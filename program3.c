#include <stdio.h>
#include <stdlib.h>

/* instrução com objetivo de imprimir na tela um dado do tipo char com valor x maiúsculo,
   sendo x um valor digitado pelo usuário e, em seguida, mostrar x em letra minúscula.
*/

int main()
{
    char x;
    printf("Digite uma letra maiúscula:");
    scanf("%c", &x);
    x = x + 32;
    printf("Letra minúscula:%c\n",x);
    return(0);

    }
