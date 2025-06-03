// #include <stdio.h>
// int main(void)
// {
//     int i=0;
//     char a[100];
//     scanf("%s",a);
//     while (a[i]!='\0')
//     {
//         i++;
//     }
//     printf("%d",i);
//     return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//     char a[100];
//     int i=0;
//     scanf("%s",a);
//     while (a[i]!='\0')
//     {
//         i++;
//     }
//     for(;i>-1;i--)
//     {
//         printf("%c",a[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[100],b[100]={};
//     scanf("%s",a);
//     for(int i=0;a[i]!='\0';i++)
//     {
//         b[i]=a[i];
//     }
//     printf("%s\n",b);
//     return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//     char a[100],b[100];
//     int i=0;
//     int j=0;
//     scanf("%s %s",a,b);
//     while (a[i]!='\0')
//     {
//         i++;
//     }
//     while (b[j]!='\0')
//     {
//         a[i+j]=b[j];
//         j++;
//     }
//     a[i+j]='\0';
//     printf("%s\n",a);
//     return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);
//     for(int i=0;a[i]!='\0';i++)
//     {
//         if(a[i]!=b[i])
//         {
//             printf("0");
//             return 0;
//         }
//     }
//     for(int i=0;b[i]!='\0';i++)
//     {
//         if(a[i]!=b[i])
//         {
//             printf("0");
//             return 0;
//         }
//     }
//     printf("1");
//     return 0;
// }