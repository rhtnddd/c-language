// #include <stdio.h>
// int main(void)
// {
//     int a=10;
//     int *p=&a;
//     printf("%d\n",*p);
//     printf("%p",p);
// }
#include <stdio.h>
int main()
{
    char *arr[]={"fire","wind","earth","water","void"};
    char **p[]={arr+3,arr+1,arr+4,arr,arr+2};
    char ***pp = p+1;
    printf("%s\n",**pp);
    printf("%s\n",*(*++pp -1));
    printf("%c\n",*(*(*pp+1)+1));
    printf("%c\n",*(*(*(pp-2)+1)+2));
    return 0;
}