#include <stdio.h>
#include <string.h>

int main(){
    char s[20];
    if(scanf("%13s", s)!=1) return 0;
    int pos=-1;
    int sum=0;
    for(int i=0;i<13;i++){
        if(s[i]=='*') pos=i;
        else {
            int d = s[i]-'0';
            int w = (i%2==0)?1:3;
            sum += w*d;
        }
    }
    int m = s[12]=='*' ? 0 : s[12]-'0';
    int t = (10 - (sum % 10)) % 10;
    int wpos = (pos%2==0)?1:3;
    int x;
    if(wpos==1) x = t;
    else x = (t * 7) % 10;
    printf("%d", x);
    return 0;
}
