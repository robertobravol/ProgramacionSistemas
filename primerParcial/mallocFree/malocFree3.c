#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam;
    char *palabra;

    printf("Ingrese cuantas letras tiene la palabra: ");
    scanf("%i", &tam);

    
    palabra = malloc((tam+1)*sizeof(char));

    printf("Ingrese la palabra: ");
    scanf("%s", palabra);

    printf("Palabra ingresada: %s \n", palabra);

    free(palabra);
    return 0;

}