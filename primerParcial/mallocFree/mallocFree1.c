#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pe;
    int tam;

    printf("Cuantos elementos tendrá el vector?");
    scanf("%i", &tam);
    pe = malloc(tam*sizeof(int));
    for(int i = 0; i<tam; i++)
    {
        printf("Ingrese elemento: ");
        scanf("%i", &pe[i]);
    }

    printf("Contenido del vector\n");

    for(int i = 0; i<tam; i++)
    {
        printf("%i", pe[i]);
        printf("\n");
    }

    free(pe);
    return 0;
}