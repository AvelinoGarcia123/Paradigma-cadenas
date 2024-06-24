#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "Eliminar 5 caracteres";
    int posicion = 9; 
    int cantidad = 5; 
    int longitud = strlen(cadena);

    printf("Cadena original: %s\n", cadena);

    if (posicion < longitud) {  
        for (int i = posicion; i < longitud - cantidad; i++) {
            cadena[i] = cadena[i + cantidad];
        }
        cadena[longitud - cantidad] = '\0';

        printf("Cadena modificada: %s\n", cadena);
    }

    return 0;
}
