#include<stdio.h>

void butler(void);

int main(void) 
{
	printf("It is the first func;\n");
	butler();

	return 0;
}

void butler(void) 
{
	printf("It is a func;\n");
	return;
}