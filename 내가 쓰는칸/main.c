#include <stdio.h>
int main(void)
{
	char a[10];
	scanf("%s", a);
	printf("welcome! ");
	for (int in = 0; a[in] != '\0'; in++)
	{
		printf("%c", a[in]);
	}
}