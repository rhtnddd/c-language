// 풀어야함
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     int m, n;
//     char juso[100001][30];
//     char jusobibun[100001][30];
//     char jusocim[30];
//     scanf("%d %d", &m, &n);

//     for(int i = 0; i < m; i++)
//     {
//         scanf("%s %s", juso[i], jusobibun[i]);
//     }
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%s", jusocim);
//         for(int j = 0; j < m; j++)
//         {
//             if(strcmp(jusocim, juso[j]) == 0)
//             {
//                 printf("%s\n", jusobibun[j]);
//                 break;
//             }
//         }
//     }
//     return 0;
// }
// 1913문제
// #include <stdio.h>
// int n[1000][1000]={0};
// int main(void)
// {
//     int a,b;
//     int japox;
//     int japoy;
//     scanf("%d %d",&a,&b);
//     int nx=0,ny=0,d=0;
//     int x[4]={1,0,-1,0},y[4]={0,1,0,-1};
//     for(int i=a*a;i>=1;i--)
//     {
//         n[nx][ny]=i;
//         if(nx+x[d%4]>=a||ny+y[d%4]>=a||nx+x[d%4]<0||ny+y[d%4]<0||n[nx+x[d%4]][ny+y[d%4]]!=0)
//         {
//             d++;
//         }
//         nx+=x[d%4];
//         ny+=y[d%4];
//     }
//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<a;j++)
//         {
//             printf("%d ",n[i][j]);
//             if(b==n[i][j])
//             {
//                 japox=i+1;
//                 japoy=j+1;
//             }
//         }
        
//         printf("\n");
//     }
//     printf("%d %d",japox,japoy);
// }
// 14916문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int sum=0;
//     scanf("%d",&n);
//     for(;;)
//     {
//         if(n%5==0)
//         {
//             sum+=n/5;
//             break;
//         }
//         if(n<0)
//         {
//             printf("-1");
//             return 0;
//         }
//         sum+=1;
//         n-=2;
//     }
//     printf("%d",sum);
// }
// 11726문제
// #include <stdio.h>
// int main(void)
// {
//     long long int sum[1001]={1,1,};
//     int n;
//     scanf("%d",&n);
//     for(int i=2;i<=n;i++)
//     {
//         sum[i]=(sum[i-1]+sum[i-2])%10007;
//     }
//     printf("%lld",sum[n]);
// }
// 5347문제
// #include <stdio.h>
// long long int gcd(long long int a,long long int b)
// {
//     while(b!=0)
//     {
//         long long int temp=a%b;
//         a=b;
//         b=temp;
//     }
//     return a;
// }
// long long int lcm(long long int a,long long int b)
// {
//     return (a/gcd(a,b))*b;
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     for(int i=0;i<n;i++)
//     {
//         long long int a, b;
//         scanf("%lld %lld",&a,&b);
//         printf("%lld\n",lcm(a,b));
//     }
//     return 0;
// }
// 9012문제
// #include <stdio.h>
// #include <string.h>
// void VPS()
// {
//     char PS[51];
//     scanf("%s",PS);
//     char stack[51];
//     int top=-1;
//     int len=strlen(PS);
//     for(int j=0;j<len;j++)
//     {
//         if(PS[j]=='(')
//         {
//             stack[++top]='(';
//         }
//         else if(PS[j]==')')
//         {
//             if(top==-1)
//             {
//                 printf("NO\n");
//                 while (j<len-1)
//                 {
//                     j++;
//                 }
//                 return;
//             }
//             top--;
//         }
//     }
//     if(top==-1)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for(int i=0;i<n;i++)
//     {
//         VPS();
//     }
//     return 0;
// }
// 10814문제
// #include <stdio.h>
// int nie[100001];
// int name[100001][101];
// int king[100001];
// int temp_a[1000001];
// void merge(int *king, int start,int middle,int end)
// {
//     int i=start;
//     int j=middle+1;
//     int k=start;
//     while(i<=middle&&j<=end)
//     {
//         if(nie[king[i]]<nie[king[j]]||(nie[king[i]]==nie[king[j]]&&king[i]<king[j]))
//         {
//             temp_a[k++]=king[i++];
//         }
//         else
//         {
//             temp_a[k++]=king[j++];
//         }
//     }
//     if(i>middle){
//         for(int t=j;t<=end;++t)
//         {
//             temp_a[k]=king[t];
//             ++k;
//         }
//     }
// 	else{
// 		for(int t=i;t<=middle;++t){
// 			temp_a[k]=king[t];
// 			++k;
// 		}
// 	}
// 	for(int t=start;t<=end;++t){
// 		king[t] = temp_a[t];
// 	}
// }
// void mergeSort(int *king,int start,int end)
// {
//     if(start<end){
//         int middle=(start+end)/2;
//         mergeSort(king,start,middle);
//         mergeSort(king,middle+1,end);
//         merge(king,start,middle,end);
//     }
// }
// int main(void)
// {
//     int n;
//     int temp;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d %s",&nie[i],name[i]);
//         king[i]=i;
//     }
//     mergeSort(king,0,n-1);
//     for(int i=0;i<n;i++)
//     {
//         int idx = king[i];
//         printf("%d %s\n", nie[idx], name[idx]);
//     }
// }
// 1010문제
// #include <stdio.h>
// long long int c(int n,int m)
// {
//     long long int r=1;
//     if(n>m/2)
//     {
//         n=m-n;
//     }
//     for(int i=0;i<n;i++)
//     {
//         r=r*(m-i)/(i+1);
//     }
//     return r;
// }
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while(t--)
//     {
//         int n,m;
//         scanf("%d %d",&n,&m);
//         printf("%lld\n",c(n,m));
//     }
//     return 0;
// }
// 1003문제
// #include <stdio.h>
// int fibo0[41];
// int fibo1[41];
// void p()
// {
//     fibo0[0]=1;
//     fibo1[0]=0;
//     fibo0[1]=0;
//     fibo1[1]=1;
//     for(int i=2;i<=40;i++)
//     {
//         fibo0[i]=fibo0[i-1]+fibo0[i-2];
//         fibo1[i]=fibo1[i-1]+fibo1[i-2];
//     }
// }
// int main(void)
// {
//     p();
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         scanf("%d",&n);
//         printf("%d %d\n",fibo0[n],fibo1[n]);
//     }
//     return 0;
// }
// 17175문제
// #include <stdio.h>
// int MOD=1000000007;
// long long int c[51];
// void p()
// {
//     c[0]=1;
//     c[1]=1;
//     for(int i = 2; i <= 50; i++)
//     {
//         c[i]=(1+c[i-2]+c[i-1])%MOD;
//     }
// }
// int main(void)
// {
//     p();
//     int n;
//     scanf("%d",&n);
//     printf("%lld\n",c[n]);
//     return 0;
// }
// 24417문제
// #include <stdio.h>
// int MOD=1000000007;
// void m(long long int a[2][2], long long int b[2][2])
// {
//     long long int temp[2][2];
//     temp[0][0]=(a[0][0]*b[0][0]+a[0][1]*b[1][0])%MOD;
//     temp[0][1]=(a[0][0]*b[0][1]+a[0][1]*b[1][1])%MOD;
//     temp[1][0]=(a[1][0]*b[0][0]+a[1][1]*b[1][0])%MOD;
//     temp[1][1]=(a[1][0]*b[0][1]+a[1][1]*b[1][1])%MOD;
//     a[0][0]=temp[0][0];
//     a[0][1]=temp[0][1];
//     a[1][0]=temp[1][0];
//     a[1][1]=temp[1][1];
// }
// void power(long long int mamamu[2][2],int n)
// {
//     long long int res[2][2]={{1,0},{0,1}};
//     while(n>0)
//     {
//         if(n%2==1)
//         {
//             m(res,mamamu);
//         }
//         m(mamamu,mamamu);
//         n/=2;
//     }
//     mamamu[0][0]=res[0][0];
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     long long int code1;
//     long long int code2;
//     if(n <= 2)
//     {
//         code1=1;
//         code2=0;
//     }
//     else
//     {
//         long long int fm[2][2]={{1,1},{1,0}};
//         power(fm,n-1);
//         code1=fm[0][0];
//         code2=(n-2);
//     }
//     printf("%lld %lld\n",code1,code2);
//     return 0;
// }