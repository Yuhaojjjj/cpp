#include <stdio.h>

int main () {
	for (int mult = 0; mult <= 10; mult++) {
		printf("==============Tabla %d================\n", mult);
		for (int i = 0; i <= 10; i++) {
			printf("%d * %d = %d\n", mult, i, mult * i);
		}
	}
	return 0;
}
