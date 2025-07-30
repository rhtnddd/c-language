// 1476문제
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
// 2751문제
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
// 1312문제
// #include <stdio.h>
// int main() {
//     int A, B, N;
//     scanf("%d %d %d", &A, &B, &N);
//     A %= B; 
//     for (int i = 0; i < N; i++) {
//         A *= 10;
//         if (i == N - 1) {
//             printf("%d\n", A / B);
//             break;
//         }
//         A %= B;
//     }
//     return 0;
// }
//2941문제
// #include <stdio.h>
// int custom_strlen(const char* str)
// {
//     int length = 0;
//     while (str[length] != '\0')
//     {
//         length++;
//     }
//     return length;
// }
// int main(void)
// {
//     char word[101];
//     scanf("%s", word);
//     int count = 0;
//     int len = custom_strlen(word);
//     for (int i = 0; i < len; i++)
//     {
//         count++;
//         if (word[i] == 'c')
//         {
//             if (i + 1 < len && (word[i+1] == '=' || word[i+1] == '-'))
//             {
//                 i++;
//             }
//         } else if (word[i] == 'd')
//         {
//             if (i + 1 < len && word[i+1] == 'z')
//             {
//                 if (i + 2 < len && word[i+2] == '=')
//                 {
//                     i += 2;
//                 }
//             }
//             else if (i + 1 < len && word[i+1] == '-')
//             {
//                 i++;
//             }
//         }
//         else if (word[i] == 'l' || word[i] == 'n')
//         {
//             if (i + 1 < len && word[i+1] == 'j')
//             {
//                 i++;
//             }
//         }
//         else if (word[i] == 's' || word[i] == 'z')
//         {
//             if (i + 1 < len && word[i+1] == '=')
//             {
//                 i++;
//             }
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }
// 1676문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int sum=0;
//     scanf("%d",&n);
//     for(int i=5;i<=n;i*=5)
//     {
//         sum+=n/i;
//     }
//     printf("%d",sum);
// }
// 2161문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int a[100000];
//     int first=0;
//     int end=0;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         a[end++]=i;
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         printf("%d ",a[first++]);
//         a[end++]=a[first++];
//     }
//     printf("%d\n",a[first]);
// }
//7568문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int a[100][2];
//     int key[100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d %d",&a[i][0],&a[i][1]);
//         key[i]=1;
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(a[i][0]<a[j][0]&&a[i][1]<a[j][1])
//             {
//                 key[i]++;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",key[i]);
//     }
// }
//10845문제
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     int n;
//     int first=0;
//     int pop=0;
//     int size=0;
//     char s[10];
//     int sum[100000];
//     scanf("%d", &n);
//     for (int i=0;i<n;i++)
//     {
//         scanf("%s",s);
//         if (strcmp(s,"push")==0)
//         {
//             int a;
//             scanf("%d",&a);
//             sum[first++]=a;
//             size++;
//         }
//         else if (strcmp(s,"pop")==0)
//         {
//             if (size==0)
//             {
//                 printf("-1\n");
//             }
//             else
//             {
//                 printf("%d\n",sum[pop++]);
//                 size--;
//             }
//         }
//         else if (strcmp(s,"size")==0)
//         {
//             printf("%d\n",size);
//         }
//         else if (strcmp(s,"empty")==0)
//         {
//             if (size==0)
//             {
//                 printf("1\n");
//             }
//             else
//             {
//                 printf("0\n");
//             }
//         }
//         else if (strcmp(s,"front")==0)
//         {
//             if (size==0)
//             {
//                 printf("-1\n");
//             }
//             else
//             {
//                 printf("%d\n",sum[pop]);
//             }
//         }
//         else if (strcmp(s,"back")==0)
//         {
//             if (size==0)
//             {
//                 printf("-1\n");
//             }
//             else
//             {
//                 printf("%d\n",sum[first - 1]);
//             }
//         }
//     }
// }
// 11650문제
// #include <stdio.h>
// int temp[100001][2];
// void merge(int arr[][2], int left, int mid, int right) {
//     int i = left;
//     int j = mid + 1;
//     int k = left;
//     while (i <= mid && j <= right)
//     {
//         if (arr[i][0] < arr[j][0] || (arr[i][0] == arr[j][0] && arr[i][1] < arr[j][1]))
//         {
//             temp[k][0] = arr[i][0];
//             temp[k][1] = arr[i][1];
//             i++;
//         }
//         else
//         {
//             temp[k][0] = arr[j][0];
//             temp[k][1] = arr[j][1];
//             j++;
//         }
//         k++;
//     }
//     while (i <= mid)
//     {
//         temp[k][0] = arr[i][0];
//         temp[k][1] = arr[i][1];
//         i++; k++;
//     }
//     while (j <= right)
//     {
//         temp[k][0] = arr[j][0];
//         temp[k][1] = arr[j][1];
//         j++; k++;
//     }
//     for (int l = left; l <= right; l++)
//     {
//         arr[l][0] = temp[l][0];
//         arr[l][1] = temp[l][1];
//     }
// }
// void merge_sort(int arr[][2], int left, int right)
// {
//     if (left < right)
//     {
//         int mid = (left + right) / 2;
//         merge_sort(arr, left, mid);
//         merge_sort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
//     }
// }
// int main(void)
// {
//     int n;
//     int japoo[100001][2];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %d", &japoo[i][0], &japoo[i][1]);
//     }
//     merge_sort(japoo, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d %d\n", japoo[i][0], japoo[i][1]);
//     }
//     return 0;
// }
// 11651
#include <stdio.h>
int temp[100001][2];
void merge(int arr[][2], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (arr[i][0] < arr[j][0] || (arr[i][0] == arr[j][0] && arr[i][1] < arr[j][1]))
        {
            temp[k][0] = arr[i][0];
            temp[k][1] = arr[i][1];
            i++;
        }
        else
        {
            temp[k][0] = arr[j][0];
            temp[k][1] = arr[j][1];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k][0] = arr[i][0];
        temp[k][1] = arr[i][1];
        i++; k++;
    }
    while (j <= right)
    {
        temp[k][0] = arr[j][0];
        temp[k][1] = arr[j][1];
        j++; k++;
    }
    for (int l = left; l <= right; l++)
    {
        arr[l][0] = temp[l][0];
        arr[l][1] = temp[l][1];
    }
}
void merge_sort(int arr[][2], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main(void)
{
    int n;
    int japoo[100001][2];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &japoo[i][1], &japoo[i][0]);
    }
    merge_sort(japoo, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", japoo[i][1], japoo[i][0]);
    }
    return 0;
}