// 15996문제
// #include <stdio.h>
// int main(void)
// {
//     long long int n,a;
//     scanf("%lld %lld",&n,&a);  
//     long long int count=0;
//     while(n>0)
//     {
//         n/=a;
//         count+=n;
//     }
//     printf("%lld\n",count);   
//     return 0;
// }
// 11727문제
// #include <stdio.h>
// int main(void)
// {
//     int a[1001]={1,1,};
//     int n;
//     scanf("%d",&n);
//     for(int i=2;i<=n;i++)
//     {
//         a[i]=(a[i-1]+2*a[i-2])%10007;
//     }
//     printf("%d\n",a[n]);
//     return 0;
// }
// 1629문제
// #include <stdio.h>
// int main(void)
// {
//     long long int a,b,c;
//     int sum=1;
//     scanf("%lld %lld %lld",&a,&b,&c);
//     while(b>0)
//     {
//         if(b%2==1)
//         {
//             sum=(sum*a)%c;
//         }
//         b/=2;
//         a=(a*a)%c;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// 9095문제
// #include <stdio.h>
// int main(void)
// {
//     int m[20];
//     int a[10][13];
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         a[i][0]=0;
//         a[i][1]=1;
//         a[i][2]=1;
//     }
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&m[i]);
//         if(m[i]==0)
//         {
//             printf("0\n");
//         }
//         for(int j=3;j<=m[i]+1;j++)
//         {
//             a[i][j]=a[i][j-1]+a[i][j-2]+a[i][j-3];
//         }
//         printf("%d\n",a[i][m[i]+1]);
//     }
//     return 0;
// }
// 1463문제
// #include <stdio.h>
// int a[1000001];
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     a[1]=0;
//     for(int i=2;i<=n;i++)
//     {
//         a[i]=a[i-1]+1;
//         if (i%2==0&&a[i]>a[i/2]+1)
//         {
//             a[i]=a[i/2]+1;
//         }
//         if(i%3==0&&a[i]>a[i/3]+1)
//         {
//             a[i]=a[i/3]+1;
//         }
//     }
//     printf("%d\n",a[n]);
//     return 0;
// }
// 2805문제
// #include <stdio.h>
// int main()
// {
//     int n;
//     long long int m;
//     scanf("%d %lld",&n,&m);
//     long long int trees[n];
//     long long int max_h=0;
//     for (int i=0;i<n;i++)
//     {
//         scanf("%lld",&trees[i]);
//         if (trees[i]>max_h)
//         {
//             max_h=trees[i];
//         }
//     }
//     long long int low=0;
//     long long int high=max_h;
//     long long int result=0;
//     while(low<=high)
//     {
//         long long int mid=low+(high-low)/2;
//         long long int wood=0;
//         for(int i=0;i<n;i++)
//         {
//             if(trees[i]>mid)
//             {
//                 wood+=trees[i]-mid;
//             }
//         }
//         if(wood>=m)
//         {
//             result=mid;
//             low=mid+1;
//         }
//         else
//         {
//             high=mid-1;
//         }
//     }
//     printf("%lld\n",result);
//     return 0;
// }
// 13241문제
// #include <stdio.h>
// int main(void)
// {
//     int a,b;
//     long long int GCD=0;
//     long long int LCM=0;
//     scanf("%d %d",&a,&b);
//     for(int i=1;i<=a;i++)
//     {
//         if(a%i==0&&b%i==0)
//         {
//             GCD=i;
//         }
//     }
//     LCM=GCD*(a/GCD)*(b/GCD);
//     printf("%lld",LCM);
//     return 0;
// }
// 11931문제
#include <stdio.h>
int a[1000001];
int temp[1000001];
void merge(int *a, int start, int middle, int end){
    int i=start;
    int j=middle+1;
    int k=start;
    while(i<=middle&&j<=end)
    {
        if(a[i]>=a[j])
        {
            temp[k]=a[i++];
        }
        else
        {
            temp[k]=a[j++];
        }
        k++;
    }
    if(i>middle)
    {
        for(int t=j;t<=end;++t)
        {
            temp[k]=a[t];
            ++k;
        }
    }
    else
    {
        for(int t=i;t<=middle;++t)
        {
            temp[k]=a[t];
            ++k;
        }
    }
    for(int t=start;t<=end;++t)
    {
        a[t] = temp[t];
    }
}

void mergeSort(int *a, int start, int end)
{
    if(start<end)
    {
        int middle=(start+end)/2;
        mergeSort(a,start,middle);
        mergeSort(a,middle+1,end);
        merge(a,start,middle,end);
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}