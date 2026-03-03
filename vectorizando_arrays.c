#include <stdio.h>

int main() {
	int vector[4];
	int i;
	for (i = 0; i < 4; i++) {
		printf("%x\n", &vector[i]);
	}
	return 0;
}
