#include <stdio.h>

int main () {
	int mult;
	printf("Dime un numero: ");
	scanf(" %d", &mult);
	for (int n = 0; n <= 10; n++) {
		printf("%d * %d = %d\n", mult, n, mult * n);
	}
	return 0;
}
