#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "hola marycela como estas";
    int n = 5;
    int longitud = strlen(cadena);
    char caracteres[n + 1]; 
    
    for (int i = 0; i < n; i++) {
        caracteres[i] = cadena[longitud - n + i];
    }
    
    caracteres[n] = '\0';
    
    printf("Los ultimos %d caracteres son: %s\n", n, caracteres);
    
    return 0;
}
