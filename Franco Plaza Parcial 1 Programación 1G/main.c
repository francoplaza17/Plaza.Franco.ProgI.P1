#include <stdio.h>
#include <stdlib.h>

#define TAMC 6

int aplicarDescuento(int* precioProducto);
int contarCaracteres(char cadena[], int tam, char x);

int main()
{
    int precioProducto = 500;
    int precioConDescuento;
    char cadena[TAMC] = {"HOLAA"};
    char x = 'A';
    int contadorCaracter;

    precioConDescuento = aplicarDescuento(&precioProducto);

    contadorCaracter = contarCaracteres(cadena, TAMC, x);

    printf("%d", contadorCaracter);

    return 0;
}

int aplicarDescuento (int* precioProducto)
{
    return *precioProducto - (*precioProducto * 5)/100;
}

int contarCaracteres(char cadena[], int tam, char x)
{
    int todoOk = -1;

    if(cadena != NULL && tam > 0)
    {
        todoOk = 0;
        for(int i=0; i < tam; i++)
        {
            if(cadena[i] == x)
            {
                todoOk++;
            }
        }
    }
    return todoOk;
}
