#include <stdio.h>

int main(){
    
    int edad;
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    int anio = 2025 - edad;
    printf("Tu anio de nacimiento es: %d \n", anio);

    return 0;
}
