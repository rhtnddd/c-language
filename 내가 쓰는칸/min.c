/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    int a=0,b=0, change=0, no_change=0;
    for(int i=0;i<10000;i++)
    {
        a=rand()%101+1;
        b=rand()%101+1;
        if (a==b){
            change++;
        } else {
            no_change++;
        }
    }
    printf("선택을 유지했을 때 확률 : %.2f%% \n선택을 유지하지 않았을 때 확률: %.2f%%\n",(float)change/10000*100,(float)no_change/10000*100);
    return 0;
}*/
// #include <stdio.h>
// int main(void)
// {
//     int a[5];
//     for(int i=0;i<4;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<4;i++)
//     {
//         printf("%d",a[i]);
//     }
// }