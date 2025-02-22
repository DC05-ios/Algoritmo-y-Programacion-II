#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{

    int x = 9000, y = 50000;
    printf("Antes de realizar el intercambio: x = %d, y = %d\n", x, y);

    intercambiar(&x, &y);

    printf("Despues de realizar el intercambio: x = %d, y = %d\n", x, y);

    return 0;
}
