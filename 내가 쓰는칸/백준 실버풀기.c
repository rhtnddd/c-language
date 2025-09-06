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
// #include <stdio.h>
// int main(void)
// {
//     int n,m,sum=0;
//     scanf("%d %d",&n,&m);
//     int a[1001]={0};
//     for(int i=2;i<=n;i++)
//     {
//         if(!a[i])
//         {
//             for(int j=i;j<=n;j+=i)
//             {
//                 if(!a[j])
//                 {
//                     a[j]=1;
//                     sum++;
//                     if (sum==m)
//                     {
//                         printf("%d\n",j);
//                         return 0;
//                     }
//                 }
//             }
//         }
//     }
// }

// 15965문제
// #include <stdio.h>
// int a[7400000]={0,};
// int main(void)
// {
//     int sum=0;
//     int num=0;
//     int n;
//     scanf("%d",&n);
//     for(int i=2;i*i<=7400000;i++)
//     {
//         if(!a[i])
//         {
//             for(int j=i*i;j<=7400000;j+=i)
//             {
//                a[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<=7400000;i++)
//     {
//         if(!a[i]&&n!=num)
//         {
//             num++;
//             sum=i;
//             if(n==num)
//             {
//                 break;
//             }
//         }
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// 4948문제
// #include <stdio.h>
// int a[3550000]={0,};
// int main(void)
// {
//     int n=1;
//     while(1)
//     {
//         int sum=0;
//         scanf("%d",&n);
//         if(n==0)
//         {
//             return 0;
//         }
//         for(int i=2;i*i<=n*2;i++)
//         {
//             if(!a[i])
//             {
//                 for(int j=i*i;j<=n*2;j+=i)
//                 {
//                    a[j]=1;
//                 }
//             }
//         }
//         for(int i=n+1;i<=n*2;i++)
//         {
//             if(!a[i])
//             {
//                 sum+=1;
//             }
//         }
//         printf("%d\n",sum);
//     }
//     return 0;
// }

// 21919문제
// #include <stdio.h>
// int a[1000001];
// int used[1000001];
// int main(void)
// {
//     int n,m[10001];
//     long long int sum=1;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&m[i]);
//     }
//     for(int i=2;i*i<=1000000;i++)
//     {
//         if(!a[i])
//         {
//             for(int j=i*i;j<=1000000;j+=i)
//             {
//                 a[j]=1;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(!a[m[i]]&&!used[m[i]])
//         {
//             sum*=m[i];
//             used[m[i]]=1;
//         }
//     }
//     if(sum!=1)
//     {
//         printf("%lld\n",sum);
//     }
//     else
//     {
//         printf("-1");
//     }
//     return 0;
// }

// 16212문제
// #include <stdio.h>
// int a[500001];
// int temp_a[500001];
// void merge(int *a, int start,int middle,int end)
// {
//     int i=start;
//     int j=middle+1;
//     int k=start;
//     while(i<=middle&&j<=end)
//     {
//         if(a[i]<=a[j])
//         {
//             temp_a[k]=a[i++];
//         }
//         else{
//             temp_a[k]=a[j++];
//         }
//         k++;
//     }
//     if(i>middle){
//         for(int t=j;t<=end;++t)
//         {
//             temp_a[k]=a[t];
//             ++k;
//         }
//     }
// 	else{
// 		for(int t=i;t<=middle;++t){
// 			temp_a[k] = a[t];
// 			++k;
// 		}
// 	}
// 	for(int t=start;t<=end;++t){
// 		a[t] = temp_a[t];
// 	}
// }
// void mergeSort(int *a,int start,int end)
// {
//     if(start<end){
//         int middle=(start+end)/2;
//         mergeSort(a,start,middle);
//         mergeSort(a, middle+1, end);
//         merge(a, start, middle, end);
//     }
// }
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     mergeSort(a,0,n-1);
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",a[i]);
//         if(i<n-1)
//         {
//             printf(" ");
//         }
//     }
// }

// 33871문제
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Song");
    }
    else
    {
        printf("Soomin");
    }
    return 0;
}