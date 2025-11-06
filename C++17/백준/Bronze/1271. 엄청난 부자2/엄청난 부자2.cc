#include <stdio.h>
#include <string.h>

char N[10105], M[10105];
int mb[10105], rb[10105], q[10105], lm, lr, lq;

int cmp(int *a,int la,int *b,int lb){
    if(la!=lb) return la>lb?1:-1;
    for(int i=0;i<la;i++) if(a[i]!=b[i]) return a[i]>b[i]?1:-1;
    return 0;
}

void sub(int *a,int *la,int *b,int lb){
    int i=*la-1,j=lb-1,borrow=0;
    for(;i>=0;i--,j--){
        int x=a[i]-borrow-(j>=0?b[j]:0);
        if(x<0){x+=10;borrow=1;} else borrow=0;
        a[i]=x;
    }
    int k=0; while(k<*la-1 && a[k]==0) k++;
    if(k) { memmove(a,a+k,(*la-k)*sizeof(int)); *la-=k; }
}

int main(){
    scanf("%s %s", N, M);
    int ln=strlen(N); lm=strlen(M);
    for(int i=0;i<lm;i++) mb[i]=M[i]-'0';
    for(int i=0;i<ln;i++){
        rb[lr++]=N[i]-'0';
        int k=0; while(lr>1 && rb[0]==0){ memmove(rb,rb+1,(--lr)*sizeof(int)); }
        int c=0;
        while(cmp(rb,lr,mb,lm)>=0){ sub(rb,&lr,mb,lm); c++; }
        q[lq++]=c;
    }
    int s=0; while(s<lq-1 && q[s]==0) s++;
    for(int i=s;i<lq;i++) putchar(q[i]+'0');
    putchar('\n');
    if(lr==0){ puts("0"); }
    else{ for(int i=0;i<lr;i++) putchar(rb[i]+'0'); putchar('\n'); }
    return 0;
}
