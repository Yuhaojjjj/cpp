#include <stdio.h>

int main() {
	char string[4];
	int i;
	int j;
	for (i = 3; i >= 0; i--) {
		scanf("%c", &string[i]);
	}
	for (j = 0; j < 4; j++) {
		printf(" %c ", string[j]);
	}
	return 0;
}
