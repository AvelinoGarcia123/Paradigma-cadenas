#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "      Hola Mundo";
    int longitud = strlen(cadena);
    int inicio = 0;

   
    while (cadena[inicio] == ' ') {
        inicio++;
    }

    
    for (int i = 0; i < longitud - inicio + 1; i++) {
        cadena[i] = cadena[inicio + i];
    }

    printf("Cadena sin espacios en blanco al principio: %s\n", cadena);

    return 0;
}
