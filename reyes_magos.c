#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//hacer un array de punteros que apuntan a strings. entonces printear los elementos
int main() {
	//variables
	char *reyes[3];
	char x[9];
	
	int i;
	int j;
	
	int len;

	//por cada elemento de los caracteres
	for(i = 0; i < 3; i++) {
		//sacar una palabra por cada elemento de reyes
		scanf(" %s", x);
		
		//sacar la longitud del string
		len = strlen(x);
		
		//esto q es?
		*(reyes + i) = malloc((len + 1) * sizeof(char));
		strcpy(*(reyes + i), x);
	}
	
	printf("\n");
	
	for(i = 0; i < 3; i++) {
		//longitud de cada string del esto (como?)
		len = strlen(*(reyes + i));
		for(j = 0; j < len; j++) {
			printf("%c", *(*(reyes + i) + j));
		}
		printf("\n");
	}
	return 0;
}
//lo he conseguido :)
