// #include <stdio.h>
// int main(void)
// {
//     int e,s,m;
//     int sum=1;
//     scanf("%d %d %d",&e,&s,&m);
//     int ee=1,ss=1,mm=1;
//     while(!(ee==e&&ss==s&&mm==m))
//     {
//         ee++;
//         ss++;
//         mm++;
//         sum++;
//         if(ee>15)
//         {
//             ee=1;
//         }
//         if(ss>28)
//         {
//             ss=1;
//         }
//         if(mm>19)
//         {
//             mm=1;
//         }
//     }
//     printf("%d",sum);
// }
// #include <stdio.h>
// int a[1000001];
// int temp_a[1000001];
// void merge(int *a, int start,int middle,int end)
// {
//     int i=start;
//     int j=middle+1;
//     int k=start;
//     while(i<=middle&&j<=end)
//     {
//         if(a[i]<=a[j])
//         {
//             temp_a[k]=a[i++];
//         }
//         else{
//             temp_a[k]=a[j++];
//         }
//         k++;
//     }
//     if(i>middle){
//         for(int t=j;t<=end;++t)
//         {
//             temp_a[k]=a[t];
//             ++k;
//         }
//     }
// 	else{
// 		for(int t=i;t<=middle;++t){
// 			temp_a[k] = a[t];
// 			++k;
// 		}
// 	}
// 	for(int t=start;t<=end;++t){
// 		a[t] = temp_a[t];
// 	}
// }
// void mergeSort(int *a,int start,int end)
// {
//     if(start<end){
//         int middle=(start+end)/2;
//         mergeSort(a,start,middle);
//         mergeSort(a, middle+1, end);
//         merge(a, start, middle, end);
//     }
// }
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     mergeSort(a,0,n-1);
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }
#include <stdio.h>
int main() {
    int A, B, N;
    scanf("%d %d %d", &A, &B, &N);
    A %= B; 
    for (int i = 0; i < N; i++) {
        A *= 10;
        if (i == N - 1) {
            printf("%d\n", A / B);
            break;
        }
        A %= B;
    }
    return 0;
}