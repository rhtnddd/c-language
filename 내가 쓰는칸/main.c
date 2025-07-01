// #include <stdio.h>//다함다했다구
// void quickSort(int* arr, int left, int right) {
//     int PL = left;
//     int PR = right;
//     int Pivot = arr[(PL + PR) / 2];
//     int temp;

//     while (PL <= PR) {
//         while (arr[PL] < Pivot) PL++;
//         while (arr[PR] > Pivot) PR--;

//         if (PL <= PR) {
//             temp = arr[PL];
//             arr[PL] = arr[PR];
//             arr[PR] = temp;
//             PL++;
//             PR--;
//         }
//     }
//     if (left < PR) quickSort(arr, left, PR);
//     if (PL < right) quickSort(arr, PL, right);
// }
// int main(void)
// {
//     int n;
//     int arr[100];
//     for (int i = 0; i < 7; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     quickSort(arr, 0, 7 - 1);
//         printf("%d\n", arr[6]);
//         printf("%d\n", arr[5]);
//     return 0;
// }
// #include <stdio.h>
// int f(int plus)
// {
//     int n=0;
//     for(int i=0;i<=plus;i++)
//     {
//         n+=i;
//     }
//     return n;
// }
// int main(void)
// {
//     int m,num;
//     scanf("%d",&m);
//     num=f(m);
//     printf("%d",num);
// }
// #include <stdio.h>
// int f(int plus)
// {
//     int a=0,b=1,temp=0;
//     for(int i=0;i<=plus;i++)
//     {
//         printf("%d ",a);
//         temp=a+b;
//         a=b;
//         b=temp;
//     }
// }
// int main(void)
// {
//     int m;
//     scanf("%d",&m);
//     f(m);
// }
// #include <stdio.h>
// int f(int plus)
// {
//     int a=1;
//     for(int i=1;i<=plus;i++)
//     {
//         printf("%d ",a*i);
//         a*=i;
//     }
// }
// int main(void)
// {
//     int m;
//     scanf("%d",&m);
//     f(m);
// }
#include <stdio.h>
int main(void)
{
    int a=5<<2;
    printf("%d",a);
}