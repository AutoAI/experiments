#include <stdio.h>

int main() {
	while (true) {
		unsigned int number = 0;
		FILE *serPort = fopen("/dev/ttyACM11", "w");
		while (true) {
			printf(">>> ");
			scanf("%x", &number);
			printf("%d\n", number);

			unsigned char writeBuffer[] = { number };
			printf("%d\n", writeBuffer[0]);
			fprintf(serPort, "%x", number);
		}
		fclose(serPort);
		return 0;
	}
}
