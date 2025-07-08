#include <stdio.h>
int main(void)
{
    char a[100];
    scanf("%s",a);
    int sum=0;
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(a[j]=='a'||a[j]=='b'||a[j]=='e'||a[j]=='f'||a[j]=='h'||a[j]=='i'||a[j]=='k'||a[j]=='m'||a[j]=='o'||a[j]=='p'||a[j]=='q'||a[j]=='r'||a[j]=='t'||a[j]=='u'||a[j]=='v'||a[j]=='w'||a[j]=='x'||a[j]=='y')
        {
            sum++;
        }
        if((a[j]=='c'&&a[j+1]=='=')||(a[j]=='c'&&a[j+1]=='-'))
        {
            sum++;
        }
        else if((a[j]=='d'&&a[j+1]=='z'&&a[j+2]=='=')||(a[j]=='d'&&a[j+1]!='z'))
        {
            sum++;
        }
        else if(a[j]=='d'&&a[j+1]=='-')
        {
            sum++;
        }
        else if((a[j]=='l'&&a[j+1]=='j')||(a[j]=='n'&&a[j+1]=='j')||(a[j]=='l'&&a[j+1]!='j')||(a[j]=='n'&&a[j+1]!='j'))
        {
            sum++;
        }
        else if((a[j]=='s'&&a[j+1]=='=')||((a[j]=='z'&&a[j+1]=='=')&&(a[j-1]!='d')))
        {
            sum++;
        }
    }
    printf("%d",sum);
}