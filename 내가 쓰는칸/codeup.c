// #include <stdio.h>

// void f()
// {
//     printf("hello");
// }
// int main()
// {
//     f();
//     return 0;
// }
// #include <stdio.h>
// int n;
// int d[101][2];
// int a, b, temp = 0,sum=0;
// int main(void)
// {
// 	scanf("%d",&n);
// 	for (int i = 1; i <= n; i++)
// 	{
// 		scanf("%d %d", &d[i][0], &d[i][1]);
// 	}
// 	for (int i = 1; i < n; i++)
// 	{
// 		for (int j = 1; j <= n-i; j++)
// 		{
// 			if (d[j][0] > d[j + 1][0])
// 			{
// 				temp = d[j][0];
// 				d[j][0] = d[j + 1][0];
// 				d[j + 1][0] = temp;

// 				sum = d[j][1];
// 				d[j][1] = d[j + 1][1];
// 				d[j + 1][1] = sum;
// 			}
// 		}
// 	}
// 	for (int i = 1; i <= n; i++)
// 	{
// 		printf("%d %d\n", d[i][0], d[i][1]);
// 	}
// }
// #include <stdio.h>
// int main(void)
// {
// 	double a, b;
// 	scanf("%lf %lf", &a, &b);
// 	a = (a - 100) * 0.9;
// 	b = (b - a) * 100 / a;
// 	if (b > 20)
// 	{
// 		printf("비만");
// 	}
// 	else if (b <= 10)
// 	{
// 		printf("정상");
// 	}
// 	else if(10<b&&b<=20)
// 	{
// 		printf("과체중");
// 	}
// }
// #include <stdio.h>
// int main(void)
// {
//     float a,b,c;
//     scanf("%f %f %f", &a,&b,&c);
//     printf("%.2f", (a+b+c)/3);
// }
// #include <stdio.h>
// void k(int a)
// {
// 	if (a == 0)
// 	{
// 		return;
// 	}
// 	printf("*");
// 	k(a -1);
// }
// void f(int a, int b)
// {
// 	if (b > a)
// 	{
// 		return;
// 	}
// 	k(b);
// 	printf("\n");
// 	f(a, b + 1);
// }
// int main(void)
// {
// 	int a;
// 	scanf("%d", &a);
// 	f(a,1);
// 	return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//     for(int i=0;i<20;i++)
//     {
//         printf("hello");
//     }
//     printf(" ");
//     for(int i=0;i<30;i++)
//     {
//         printf("world");
//     }
//     return 0;
// }
#include <stdio.h>
int main(void)
{
	int a;
	int b[10000];
	scanf("%d", &a);
	for (int in = 0; in < a; in++)
	{
		scanf("%d", &b[in]);
	}
	for (int i = a-1; i >= 0; i--)
	{
		printf("%d ",b[i]);
	}
}

