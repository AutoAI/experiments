#include <stdio.h>

int main() {
	while (true) {
		FILE *serPort = fopen("ff", "w");
		unsigned int number;
		printf(">>> ");
		scanf("%x", &number);
		number = 0;

		char writeBuffer[] = { number };
		fwrite(writeBuffer, sizeof(char), sizeof(writeBuffer), serPort);
		fclose(serPort);
		return 0;
	}
}
