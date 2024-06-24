#include <stdio.h>
#include <string.h>

void introducircadena(char *cadena, char *subcadena, int posicion) {
    char resultado[100];
    
    strncpy(resultado, cadena, posicion);

    strcat(resultado, subcadena);
    
    strcat(resultado, cadena + posicion);
    
    printf("Cadena resultante: %s\n", resultado);
}

int main() {
    char cadena[] = "Esto es para una prueba";
    char subcadena[] = "una insercion ";
    int posicion = 8;
    
    printf("Cadena original: %s\n", cadena);
    printf("subcadena a insertar: %s\n", subcadena);
    
    introducircadena(cadena, subcadena, posicion);
    
    return 0;
}
