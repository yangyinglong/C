#include<stdio.h>

int main(void)
{
	float weight;		/*你的体重			*/
	float value;		/*相等重量的白金重量	*/

	printf("Are you worth your weight in platinum?\n");
	printf("Let't check it out!\n");
	printf("Please enter your weight in pounds: ");

	/* 获取用户输入				*/
	scanf("%f", &weight);
	/* 假设白金的价格是每盎司$1700	*/
	/* 14.5833 用于把英镑常衡量盎司转换成金衡盎司 */
	value = weight * 1700.0 * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("Your are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	getchar();
	getchar();
	return 0;
}