#include <unistd.h>
#include <stdio.h>
int main()
{
   FILE *file;
   file = fopen("/dev/ttyACM11","w");  //Opening device file
   usleep(2000000);
   printf("hi");
   usleep(2000000);
   printf("hi");
   usleep(2000000);
   printf("hi");

	unsigned char c = 0x7f;
	
	printf("%d", fwrite(&c, 1, 1, file));

   fclose(file);
}
