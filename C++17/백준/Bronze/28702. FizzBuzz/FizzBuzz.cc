#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isnum(const char *s){
    if(*s=='\0') return 0;
    for(const char *p=s; *p; ++p) if(!isdigit((unsigned char)*p)) return 0;
    return 1;
}

void fb_to_str(long long x, char *out){
    if(x%15==0) strcpy(out,"FizzBuzz");
    else if(x%3==0) strcpy(out,"Fizz");
    else if(x%5==0) strcpy(out,"Buzz");
    else sprintf(out,"%lld",x);
}

int main(){
    char a[32], b[32], c[32], t[64];
    if(scanf("%31s%31s%31s", a, b, c)!=3) return 0;
    if(isnum(a) || isnum(b) || isnum(c)){
        long long k = -1;
        if(isnum(a)){
            long long v = atoll(a);
            k = v;
        } else if(isnum(b)){
            long long v = atoll(b);
            k = v - 1;
        } else {
            long long v = atoll(c);
            k = v - 2;
        }
        if(k < 1) k = 1;
        char s1[64], s2[64], s3[64];
        fb_to_str(k, s1);
        fb_to_str(k+1, s2);
        fb_to_str(k+2, s3);
        if(strcmp(s1,a)==0 && strcmp(s2,b)==0 && strcmp(s3,c)==0){
            fb_to_str(k+3, t);
            printf("%s\n", t);
            return 0;
        } else {
            long long start = 1;
            for(long long kk = start; kk <= k+100; ++kk){
                fb_to_str(kk, s1);
                fb_to_str(kk+1, s2);
                fb_to_str(kk+2, s3);
                if(strcmp(s1,a)==0 && strcmp(s2,b)==0 && strcmp(s3,c)==0){
                    fb_to_str(kk+3, t);
                    printf("%s\n", t);
                    return 0;
                }
            }
        }
    } else {
        for(int r=1;r<=15;++r){
            char s1[64], s2[64], s3[64];
            fb_to_str(r, s1);
            fb_to_str(r+1, s2);
            fb_to_str(r+2, s3);
            if(strcmp(s1,a)==0 && strcmp(s2,b)==0 && strcmp(s3,c)==0){
                fb_to_str(r+3, t);
                printf("%s\n", t);
                return 0;
            }
        }
    }
    return 0;
}
