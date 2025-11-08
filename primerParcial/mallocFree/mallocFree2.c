#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
} producto;

int main()
{
    struct producto *prod;
    prod = malloc(sizeof(producto));
    prod->codigo=1;
    strcpy(prod->descripcion, "papas");
    prod->precio = 10.50;

    printf("Codigo del producto: %i\n", prod->codigo);
    printf("Descripcion del producto: %s\n", prod->descripcion);
    printf("Precio del producto: %0.2f\n", prod->precio);

    free(prod);
    return 0;
    
}
