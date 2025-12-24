#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int count=0;
    int number=665;
    while(count<n)
    {
        number++;
        int temp=number;
        int has666=0;
        while(temp > 0)
        {
            if(temp % 1000 == 666)
            {
                has666=1;
                break;
            }
            temp/=10;
        }
        if (has666)
        {
            count++;
        }
    }
    printf("%d\n",number);
    return 0;
}