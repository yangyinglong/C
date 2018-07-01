/* 第三题 */
#include<stdio.h>
#include<string.h>

int mystrcmp();

int main(void)
{	
	char str1[100];
	char str2[100];
	int result;

	scanf("%s", str1);
	getchar();
	scanf("%s", str2);
	result = mystrcmp(str1, str2);
	if (result == 0)
	{
		printf("相等\n");
	}
	else if (result == 1)
	{
		printf("大于\n");
	}
	else if (result == -1)
	{
		printf("小于\n");
	}

	return 0;
}

int mystrcmp(char *str1, char *str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i, j;
	int len = len1 < len2 ? len1 : len2;

	for (int i = 0; i < len; ++i)
	{
		if (str1[i] >= 'A' && str2['i'] >= 'A')
		{
			i = str1[i] - 32;
			j = str2[j] - 32;
		}
		else if (str1[i] >= 'A')
		{	
			i = str1[i] - 32;
			j = str2[j];
		}
		else if (str2[i] >= 'A')
		{
			i = str1[i];
			j = str2[j] - 32;
		}

		if (i > j)
		{
			return 1;
		}
		if (i < j)
		{
			return -1;
		}
		// printf("%c\n", str1[i]);
		// printf("%c\n", str2[i]);
	}
	if (len1 > len2)
	{
		return 1;
	}
	if (len1 < len2)
	{
		return -1;
	}
	return 0;
}