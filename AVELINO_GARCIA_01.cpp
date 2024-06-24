#include <stdio.h>
#include <string.h>
int main (){
	char cadenaoriginal[]="hola mundo";
	int n = 5;
	char resultado [20];
	
	strncpy(resultado, cadenaoriginal, n);
	resultado[n] = '\0';
	printf ("los primeros %d caracteres son : %s\n",n, resultado);
	
	return 0;
}
