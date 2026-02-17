#include <stdio.h>
int main() {
	int arr[4];
	int suma = 0;
	int max = arr[0];
	int i;
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf("Introduce un numero: ");
		scanf("%i", &arr[i]);
		int nn = arr[i];
		if (max < nn) {
			max = arr[i];
		suma += arr[i];
		}
	}
	printf("La suma de los numeros es: %i\n", suma);
	printf("El numero mayor es: %i", max);
	return 0;
}

