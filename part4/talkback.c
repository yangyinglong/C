/* talkback.c --演示与用户交互*/

#include<stdio.h>
#include<string.h>
#define DENSITY 62.4		//人体密度
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;		//以字节为单位给出对象的大小
	letters = strlen(name);		//字符串中的字符长度
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", 
			name, volume);
	printf("Also, your first name has %d letters,\n",
			letters);
	printf("and we have %d bytes to store it.\n", size);
	printf("%c\n", name[2]);

	return 0;
}