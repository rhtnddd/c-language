// 2563문제
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int paper[100][100] = {0};
//     int totalArea = 0;
//     for(int i = 0; i < n; i++)
//     {
//         int x, y;
//         scanf("%d %d", &x, &y);
//         for(int row = y; row < y + 10; row++)
//         {
//             for(int col = x; col < x + 10; col++)
//             {
//                 if(paper[row][col] == 0)
//                 {
//                     paper[row][col] = 1;
//                     totalArea++;
//                 }
//             }
//         }
//     }
//     printf("%d\n",totalArea);
//     return 0;
// }
// 2164문제
// #include <stdio.h>
// int n;
// int first=0;
// int end=0;
// int card[1000001];
// int main(void)
// {
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         card[end++]=i;
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         first++;
//         card[end++]=card[first++];
//     }
//     printf("%d",card[first]);
// }
// 10773문제
// #include <stdio.h>
// int main()
// {
//     int k;
//     scanf("%d", &k);
//     int stack[100000];
//     int top = -1;
//     for (int i = 0; i < k; i++)
//     {
//         int num;
//         scanf("%d", &num);
//         if(num == 0)
//         {
//             if(top != -1)
//             {
//                 top--;
//             }
//         }
//         else
//         {
//             top++;
//             stack[top] = num;
//         }
//     }
//     long long sum = 0;
//     for (int i = 0; i <= top; i++)
//     {
//         sum += stack[i];
//     }
//     printf("%lld\n", sum);
//     return 0;
// }
// 10828문제
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     int n;
//     int first=-1;
//     int size=0;
//     char s[10];
//     int sum[100000];
//     scanf("%d", &n);
//     for (int i=0;i<n;i++)
//     {
//         scanf("%s",s);
//         if (strcmp(s,"push")==0)
//         {
//             int a;
//             scanf("%d",&a);
//             sum[++first]=a;
//             size++;
//         }
//         else if (strcmp(s,"pop")==0)
//         {
//             if (size==0)
//             {
//                 printf("-1\n");
//             }
//             else
//             {
//                 printf("%d\n",sum[first--]);
//                 size--;
//             }
//         }
//         else if (strcmp(s,"size")==0)
//         {
//             printf("%d\n",size);
//         }
//         else if (strcmp(s,"empty")==0)
//         {
//             if (size==0)
//             {
//                 printf("1\n");
//             }
//             else
//             {
//                 printf("0\n");
//             }
//         }
//         else if (strcmp(s,"top")==0)
//         {
//             if (size==0)
//             {
//                 printf("-1\n");
//             }
//             else
//             {
//                 printf("%d\n",sum[first]);
//             }
//         }
//     }
// }
// 1920문제
// #include <stdio.h>
// int M[100001];
// int temp[100001];
// void merge(int *M, int start, int middle, int end){
//     int i=start;
//     int j=middle + 1;
//     int k=start;
//     while(i<=middle && j<=end)
//     {
//         if(M[i]<=M[j])
//         {
//             temp[k]=M[i++];
//         }
//         else
//         {
//             temp[k]=M[j++];
//         }
//         k++;
//     }
//     if(i>middle)
//     {
//         for(int t=j;t<=end;++t)
//         {
//             temp[k]=M[t];
//             ++k;
//         }
//     }
//     else
//     {
//         for(int t=i;t<=middle;++t)
//         {
//             temp[k]=M[t];
//             ++k;
//         }
//     }
//     for(int t=start;t<=end;++t)
//     {
//         M[t] = temp[t];
//     }
// }

// void mergeSort(int *M, int start, int end)
// {
//     if(start<end)
//     {
//         int middle=(start+end)/2;
//         mergeSort(M,start,middle);
//         mergeSort(M,middle+1,end);
//         merge(M,start,middle,end);
//     }
// }

// int binary_search(int M[], int count,int answer)
// {
//     int str = 0;
//     int end = count-1;
//     while(str<=end)
//     {
//         int mid=(str+end)/2;
//         if(M[mid]==answer)
//         {
//             return 1;
//         }
//         else if(M[mid]>answer)
//         {
//             end=mid-1;
//         }
//         else
//         {
//             str=mid+1;
//         }
//     }
//     return 0;
// }

// int main(void)
// {
//     int n;
//     int n1;
//     int ebuntamsec;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&M[i]);
//     }
//     mergeSort(M,0,n-1);
//     scanf("%d",&n1);
//     for(int i=0;i<n1;i++)
//     {
//         scanf("%d",&ebuntamsec);
//         printf("%d\n",binary_search(M,n,ebuntamsec));
//     }
// }
// 10814문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int nie[100001];
//     char s[100001][100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d %s",&nie[i],&s[i]);
//     }
// }
// 11047문제
// #include <stdio.h>
// int main(void)
// {
//     int coin[11];
//     int n;
//     int money;
//     int sum=0;
//     scanf("%d %d",&n,&money);
//     for(int i=n-1;i>=0;i--)
//     {
//         scanf("%d",&coin[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         sum+=money/coin[i];
//         money%=coin[i];
//     }
//     printf("%d",sum);
// }
// 2839문제
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    int count=0;
    while(n>=0)
    {
        if(n%5==0)
        {
            count+=n/5;
            printf("%d",count);
            return 0;
        }
        n-=3;
        count++;
    }
    printf("-1");
    return 0;
}