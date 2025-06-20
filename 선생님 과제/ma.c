// #include <stdio.h>
// int f(int plus)
// {
//     if(plus==1)
//     {
//         return plus;
//     }
//     else{
//         return f(plus-1)+plus;
//     }
// }
// int main(void)
// {
//     int m,num;
//     scanf("%d",&m);
//     num=f(m);
//     printf("%d\n",num);
// }
// #include <stdio.h>
// int f(int plus)
// {
//     printf("%d ",plus);
//     if(plus==0)
//     {
//         return 0;
//     }
//     else if(plus==1 || plus ==2)
//     {
//         return 1;
//     }
//     else{
//         return f(plus-1)+f(plus-2);
//     }
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
//     if(plus==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return f(plus-1)*plus;
//     }
// }
// int main(void)
// {
//     int m;
//     scanf("%d",&m);
//     printf("%d",f(m));
// }