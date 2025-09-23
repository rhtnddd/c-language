#include <stdio.h>
int m[100001];
int temp[100001];
void merge(int *m, int start, int middle, int end){
    int i=start;
    int j=middle + 1;
    int k=start;
    while(i<=middle && j<=end)
    {
        if(m[i]<=m[j])
        {
            temp[k]=m[i++];
        }
        else
        {
            temp[k]=m[j++];
        }
        k++;
    }
    if(i>middle)
    {
        for(int t=j;t<=end;++t)
        {
            temp[k]=m[t];
            ++k;
        }
    }
    else
    {
        for(int t=i;t<=middle;++t)
        {
            temp[k]=m[t];
            ++k;
        }
    }
    for(int t=start;t<=end;++t)
    {
        m[t] = temp[t];
    }
}
void mergeSort(int *m, int start, int end)
{
    if(start<end)
    {
        int middle=(start+end)/2;
        mergeSort(m,start,middle);
        mergeSort(m,middle+1,end);
        merge(m,start,middle,end);
    }
}
int binary_search(int m[], int count,int answer)
{
    int str = 0;
    int end = count-1;
    while(str<=end)
    {
        int mid=(str+end)/2;
        if(m[mid]==answer)
        {
            return 1;
        }
        else if(m[mid]>answer)
        {
            end=mid-1;
        }
        else
        {
            str=mid+1;
        }
    }
    return 0;
}
int main(void)
{
    int n;
    int n1;
    int e;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    mergeSort(m,0,n-1);
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&e);
        printf("%d\n",binary_search(m,n,e));
    }
}