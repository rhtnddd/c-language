#include <stdio.h>
int a[1000001];
int temp_a[1000001];
void merge(int *a, int start,int middle,int end)
{
    int i=start;
    int j=middle+1;
    int k=start;
    while(i<=middle&&j<=end)
    {
        if(a[i]<=a[j])
        {
            temp_a[k]=a[i++];
        }
        else{
            temp_a[k]=a[j++];
        }
        k++;
    }
    if(i>middle){
        for(int t=j;t<=end;++t)
        {
            temp_a[k]=a[t];
            ++k;
        }
    }
	else{
		for(int t=i;t<=middle;++t){
			temp_a[k] = a[t];
			++k;
		}
	}
	for(int t=start;t<=end;++t){
		a[t] = temp_a[t];
	}
}
void mergeSort(int *a,int start,int end)
{
    if(start<end){
        int middle=(start+end)/2;
        mergeSort(a,start,middle);
        mergeSort(a, middle+1, end);
        merge(a, start, middle, end);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}