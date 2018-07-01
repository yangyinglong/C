/* 第四题 */
#include<stdio.h>

void input(struct Contact *contact, int n);
void find(struct Contact *contact, int n, char *name);

struct Contact
{
	char name[10];
	char sex;
	char phone[11];
};

int main(void)
{
	int n;
	struct Contact contact[100];
	char name[10];

	printf("Please enter n: ");
	scanf("%d", &n);
	input(contact, n);
	scanf("%s", name);
	find(contact, n, name);
	return 0;
}

void input(struct Contact *contact, int n)
{
	for (int i = 0; i < n; ++i)
	{
		scanf("%s", contact[i].name);
		scanf("%c", &contact[i].sex);
		scanf("%s", contact[i].phone);
	}
	return;

}

void find(struct Contact *contact, int n, char *name)
{
	for (int i = 0; i < n; ++i)
	{
		if (strcmp(contact[i].name, name) == 0)
		{
			printf("%s 	%c 	%s\n", contact[i].name, contact[i].sex, contact[i].phone);
			return;
		}
	}
	printf("None\n");
	return;
}

