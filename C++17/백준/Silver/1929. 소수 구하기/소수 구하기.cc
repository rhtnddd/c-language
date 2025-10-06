#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int m,n;
    scanf("%d %d",&m,&n);
    bool prime[n+1];
    for(int i=0;i<=n;i++)
    {
        prime[i] = true;
    }
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j] = false;
            }
        }
    }
    for(int i=m;i<=n;i++)
    {
        if(prime[i])
        {
            printf("%d\n",i);
        }
    }
    return 0;
}