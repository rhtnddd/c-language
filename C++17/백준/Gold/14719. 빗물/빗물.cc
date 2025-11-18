#include <stdio.h>
int main(void)
{
	int x, y,water;
	int a[501] = { 0 };
	int sum=0;
	int leftmax,rightmax;
	scanf("%d %d",&x,&y);
	for (int i = 0; i < y; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < y - 1; i++)
	{
		leftmax = a[i];
		rightmax = a[i];
		for (int j = 0; j < i; j++)
		{
			if (a[j] > leftmax)
			{
				leftmax = a[j];
			}
		}
		for (int j = i+1; j < y; j++)
		{
			if (a[j] > rightmax)
			{
				rightmax = a[j];
			}
		}
		water = (leftmax < rightmax ? leftmax : rightmax) - a[i];
		if (water > 0)
		{
			sum += water;
		}
	}
	printf("%d", sum);
}