/* 第一题 */
#include<stdio.h>

int main(void)
{
	int x = 10;
	int y = 2;	
	int n;		//第多少天
	int s;		// 剩余的薯片包数

	printf("Please enter n :");
	scanf("%d", &n);
	s = x - n / y - 1;
	printf("There are %d bags of potato chips left\n", s);

	return 0;

}