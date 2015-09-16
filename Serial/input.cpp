#include <stdio.h>

int main() {
	while (true) {
		unsigned int number;
		
		printf(">>>");
		
		scanf("%x", &number);

		printf("%d\n", number);

		number = 0;
	}
}
