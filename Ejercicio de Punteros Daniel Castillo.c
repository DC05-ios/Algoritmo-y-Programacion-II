#include <stdio.h>
#include <stdlib.h> // Aplicamos las bibliotecas

void intercambiar(int *a, int *b) // Utilizamos void para declarar punteros que pueden apuntar a cualquier tipo de dato
{
    int temp = *a; // Usamos temp para almacenar temporalmente el valor de a mientras se intercambian los valores de a y b como es este caso
    *a = *b;
    *b = temp; // Identificamos las variables

}

int main() // De aqui implicitamente inicia el programa
{

    int x = 9000, y = 50000; // Damos valor a las variables
    printf("Antes de realizar el intercambio: x = %d, y = %d\n", x, y); // Aqui con printf, muestra en la ejecución del programa el enunciado indicado

    intercambiar(&x, &y); // Aqui con & guarda la informacion de las variables y despues realiza el "Intercambio"

    printf("Despues de realizar el intercambio: x = %d, y = %d\n", x, y); // Ya aqui muestra el enunciado

    return 0;
}
