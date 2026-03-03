#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vector_num = 4;
	int* vector = malloc(vector_num*sizeof(int));
	//IMPORTANTE: malloc devuelve un PUNTERO hacia la memoria vacía
	int i = 0;
	
	for(i = 0; i < vector_num; i++) {
		*(vector + i) = i;
	}
	for(i = 0; i < vector_num; i++) {
		printf("%i", *(vector + i));
	}
	return 0;
}
