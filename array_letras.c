#include <stdio.h>

int main() {
	char string[4];
	for (int i = 0; i < 4; i++) {
		scanf("%c", &string[i]);
	}
	for (int j = 0; j < 4; j++) {
		printf(" %c ", string[j]);
	}
	return 0;
}

