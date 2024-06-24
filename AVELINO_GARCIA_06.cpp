#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char subcadena[50];

    printf("Ingresa una cadena: ");
    scanf("%s", cadena);

    printf("Ingresa la subcadena a eliminar: ");
    scanf("%s", subcadena);

    char *posicion = strstr(cadena, subcadena);

    if (posicion != NULL) {
        memmove(posicion, posicion + strlen(subcadena), strlen(posicion + strlen(subcadena)) + 1);
        printf("Cadena modificada: %s\n", cadena);
    } else {
        printf("La subcadena no se encontró en la cadena.\n");
    }

    return 0;
}
