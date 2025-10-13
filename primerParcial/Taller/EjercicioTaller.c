#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20
#define MAX_USUARIO 6

typedef struct Persona {
    char nombre[MAX_SIZE], apellido[MAX_SIZE];
    int edad;
    int anio;
    char usuario[MAX_USUARIO];
} Persona;

int main() {
    Persona personas[5];

    for (int i = 0; i < 5; i++) {
        printf("======================================================\n");
        printf("Ingrese los datos para la Persona %d\n", i + 1);

        printf("Ingrese su nombre: ");
        scanf("%s", personas[i].nombre);

        printf("Ingrese su apellido: ");
        scanf("%s", personas[i].apellido);

        printf("Ingrese su edad: ");
        scanf("%d", &personas[i].edad);
        personas[i].anio = 2025 - personas[i].edad;

        personas[i].usuario[0] = personas[i].nombre[0];
        strncpy(personas[i].usuario + 1, personas[i].apellido, MAX_USUARIO - 1);
        personas[i].usuario[MAX_USUARIO - 1] = '\0';
    }

    printf("\n Personas Registradas \n");
    for (int i = 0; i < 5; i++) {
        printf("======================================================\n");
        printf("Persona %d\n", i + 1);
        printf("Nombre: %s\n", personas[i].nombre);
        printf("Apellido: %s\n", personas[i].apellido);
        printf("Edad: %d\n", personas[i].edad);
        printf("Anio: %d\n", personas[i].anio);
        printf("Usuario: %s\n", personas[i].usuario);
    }

    return 0;
}