/* 第二题 */
#include<stdio.h>
int main(void)
{
	int h;		/*小球的高度*/
	float l;		/* 共经过的长度*/
	float hn;		/* 第n次反弹的高度 */

	printf("Please enter ball height: ");
	scanf("%d", &h);
	l = h;
	hn = h;
	for (int i = 0; i < 10; ++i)
	{
		l = l + hn;
		hn = hn / 2.0;
	}
	l = l - hn;
	printf("第十次小球的高度是:	%.2f\n", hn);
	printf("共经过的长度是:	%.2f\n", l);

	return 0;
}