#include <stdio.h>
int nie[100001];
int name[100001][101];
int king[100001];
int temp_a[1000001];
void merge(int *king, int start,int middle,int end)
{
    int i=start;
    int j=middle+1;
    int k=start;
    while(i<=middle&&j<=end)
    {
        if(nie[king[i]]<nie[king[j]]||(nie[king[i]]==nie[king[j]]&&king[i]<king[j]))
        {
            temp_a[k++]=king[i++];
        }
        else
        {
            temp_a[k++]=king[j++];
        }
    }
    if(i>middle){
        for(int t=j;t<=end;++t)
        {
            temp_a[k]=king[t];
            ++k;
        }
    }
	else{
		for(int t=i;t<=middle;++t){
			temp_a[k]=king[t];
			++k;
		}
	}
	for(int t=start;t<=end;++t){
		king[t] = temp_a[t];
	}
}
void mergeSort(int *king,int start,int end)
{
    if(start<end){
        int middle=(start+end)/2;
        mergeSort(king,start,middle);
        mergeSort(king,middle+1,end);
        merge(king,start,middle,end);
    }
}
int main(void)
{
    int n;
    int temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %s",&nie[i],name[i]);
        king[i]=i;
    }
    mergeSort(king,0,n-1);
    for(int i=0;i<n;i++)
    {
        int idx = king[i];
        printf("%d %s\n", nie[idx], name[idx]);
    }
}