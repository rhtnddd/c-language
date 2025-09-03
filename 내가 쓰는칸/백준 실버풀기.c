// 15549문제
// int -2147483648

// 1158문제
// #include <stdio.h>
// int main(void)
// {
//     int N, K;
//     if (scanf("%d %d", &N, &K) != 2) return 0;
//     int q[5000];
//     int head = 0, tail = 0, cnt = 0;
//     for (int i = 1; i <= N; ++i) {
//         q[tail] = i;
//         tail = (tail + 1) % 5000;
//         cnt++;
//     }
//     printf("<");
//     while (cnt > 0) {
//         for (int i = 0; i < K - 1; ++i) {
//             int x = q[head];
//             head = (head + 1) % 5000;
//             q[tail] = x;
//             tail = (tail + 1) % 5000;
//         }
//         int removed = q[head];
//         head = (head + 1) % 5000;
//         cnt--;

//         if (cnt == 0) {
//             printf("%d", removed);
//         } else {
//             printf("%d, ", removed);
//         }
//     }
//     printf(">\n");
//     return 0;
// }

// 1026문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int temp=0;
//     int temp1=0;
//     int sum=0;
//     int a[100];
//     int b[100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&b[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//             if(b[i]<b[j])
//             {
//                 temp1=b[i];
//                 b[i]=b[j];
//                 b[j]=temp1;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         sum+=a[i]*b[i];
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// 9655문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     if(n%2==1)
//     {
//         printf("SK\n");
//     }
//     else
//     {
//         printf("CY\n");
//     }
//     return 0;
// }

// 9656문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("SK\n");
//     }
//     else
//     {
//         printf("CY\n");
//     }
//     return 0;
// }

// 9657문제
// #include <stdio.h>
// int main(void)
// {
//     int a[2000]={1,0,1,1,};
//     int m[3]={1,3,4};
//     int n;
//     scanf("%d",&n);
//     for(int i=4;i<n;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(a[i-m[j]]==0)
//             {
//                 a[i]=1;
//             }
//         }
//     }
//     if(a[n-1]==0)
//     {
//         printf("CY\n");
//         return 0;
//     }
//     else
//     {
//         printf("SK\n");
//         return 0;
//     }
// }

// 9658문제
// #include <stdio.h>
// int main(void)
// {
//     int a[2000]={1,0,1,0};
//     int m[3]={1,3,4};
//     int n;
//     scanf("%d",&n);
//     for(int i=4;i<n;i++)
//     {
//         a[i]=1;
//     }
//     for(int i=4;i<n;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(a[i-m[j]]==1)
//             {
//                 a[i]=0;
//             }
//         }
//     }
//     if(a[n-1]==0)
//     {
//         printf("SK\n");
//         return 0;
//     }
//     else
//     {
//         printf("CY\n");
//         return 0;
//     }
// }

// 9659문제
// #include <stdio.h>
// int main(void)
// {
//     long long int n;
//     scanf("%lld",&n);
//     if(n%2!=0)
//     {
//         printf("SK\n");
//     }
//     else
//     {
//         printf("CY\n");
//     }
//     return 0;
// }

// 1850문제
// #include <stdio.h>
// int main(void)
// {
//     long long int n,m;
//     scanf("%lld %lld",&n,&m);
//     long long int temp;
//     while(m!=0)
//     {
//         temp=n%m;
//         n=m;
//         m=temp;
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("1");    
//     }
//     return 0;
// }

// 2108문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     int count[8001]={0};
//     int sum=0;
//     int min=4001,max=-4001;
//     for (int i=0;i<n;i++)
//     {
//         int x;
//         scanf("%d",&x);
//         sum+=x;
//         count[x+4000]++;
//         if(x<min)
//         {
//             min=x;
//         }
//         if(x>max)
//         {
//             max=x;
//         }
//     }
//     int q = sum / n;
//     int r = sum % n;
//     if(r*2>=n)
//     {
//         q++;
//     }
//     if(r * 2 <= -n)
//     {
//         q--;
//     }
//     printf("%d\n", q);
//     int midCount=0;
//     int median=0;
//     for(int i=0;i<=8000;i++)
//     {
//         midCount+=count[i];
//         if(midCount>=n/2+1)
//         {
//             median=i-4000;
//             break;
//         }
//     }
//     printf("%d\n",median);
//     int mode=0;
//     int maxFreq=0;
//     for (int i=0;i<=8000;i++)
//     {
//         if(count[i]>maxFreq)
//         {
//             maxFreq = count[i];
//         }
//     }
//     int modeCount=0;
//     for (int i=0;i<=8000;i++)
//     {
//         if (count[i]==maxFreq)
//         {
//             mode=i-4000;
//             modeCount++;
//             if (modeCount==2)
//             {
//                 break;
//             }
//         }
//     }
//     printf("%d\n",mode);
//     printf("%d\n",max-min);
//     return 0;
// }

// 1789문제
// #include <stdio.h>
// int main(void)
// {
//     long long int n;
//     int num=0;
//     scanf("%lld",&n);
//     for(long long int i=1;i<=n;i++)
//     {
//         if(((i*(i+1))/2)<=n)
//         {
//             num=i;
//         }
//         else
//         {
//             break;
//         }
//     }
//     printf("%d\n",num);
//     return 0;
// }

// 11055문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int a[1001]={0};
//     int m[1001]={0};
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//         m[i]=a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<=n;j++)
//         {
//             if(a[i]<a[j]&&m[j]<m[i]+a[j])
//             {
//                 m[j]=m[i]+a[j];
//             }
//         }
//     }
//     int an=0;
//     for(int i=0;i<n;i++)
//     {
//         if(an<m[i])
//         {
//             an=m[i];
//         }
//     }
//     printf("%d",an);
// }

// 1158문제
// #include <iostream>
// #include <queue>
// using namespace std;
// int main(void)
// {   
//     queue<int> q;
//     int n,m,j=0,a[10000];
//     cin >> n;
//     cin >> m;
//     cout << "<";
//     for(int i=1;i<=n;i++)
//     {
//         q.push(i);
//     }
//     while(!q.empty())
//     {
//         for(int i=0;i<m-1;i++)
//         {
//             q.push(q.front());
//             q.pop();
//         }
//         a[j]=q.front();
//         q.pop();
//         j++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout << a[i];
//         if(i!=n-1)
//         {
//             cout << ", ";
//         }
//     }
//     cout << ">";
// }

// 11866문제
// #include <stdio.h>
// int main(void)
// {
//     int n,m,j=0;
//     int first=0;
//     int end=0,size=0;
//     int a[1000000];
//     int am[1000000];
//     scanf("%d %d",&n,&m);
//     for(int i=1;i<=n;i++)
//     {
//         a[first++]=i;
//         size++;
//     }
//     while(!(size==0))
//     {
//         for(int i=0;i<m-1;i++)
//         {
//             a[first++]=a[end++];
//         }
//         size--;
//         am[j++]=a[end++];
//     }
//     printf("<");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",am[i]);
//         if(i!=n-1)
//         {
//             printf(", ");
//         }
//     }
//     printf(">\n");
//     return 0;
// }

// 2960문제
#include <stdio.h>
int main(void)
{
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    int a[1001]={0};
    for(int i=2;i<=n;i++)
    {
        if(!a[i])
        {
            for(int j=i;j<=n;j+=i)
            {
                if(!a[j])
                {
                    a[j]=1;
                    sum++;
                    if (sum==m)
                    {
                        printf("%d\n",j);
                        return 0;
                    }
                }
            }
        }
    }
}