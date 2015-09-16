#include <stdio.h>
#include <string.h>

char serialPortFilename[] = "/dev/ttyACM10";

int main() {
	FILE *serPort = fopen(serialPortFilename, "w");

	//if (serPort == NULL) {
	//	printf("ERROR");	
	//	return 0;
	//}

	char writeBuffer[] = {'1'};

	fwrite(writeBuffer, sizeof(char), sizeof(writeBuffer), serPort);
	fclose(serPort);
	return 0;

}
