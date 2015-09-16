#include <stdio.h>
#include <string.h>


int main()
{
	FILE *serPort = fopen("log", "w");

	if (serPort == NULL) {
		printf("Wrong Serial Port");	
		return 1;
	}

	char writeBuffer[] = {'1'};

	fwrite(writeBuffer, sizeof(char), sizeof(writeBuffer), serPort);
	fclose(serPort);
	return 0;

}
