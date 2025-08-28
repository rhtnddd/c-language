// 1
// #include <stdio.h>
// int main(void)
// {
//     char n[101];
//     fgets(n,sizeof(n),stdin);
//     for(int i=0;n[i]!='\0';i++)
//     {
//         if(n[i]!=' ')
//         {
//             printf("%c",n[i]);
//         }
//     }
// }
// 2
// #include <stdio.h>
// int main(void)
// {
//     char n[101];
//     int sum=0;
//     fgets(n,sizeof(n),stdin);
//     for(int i=0;n[i]!='\0';i++)
//     {
//         if(48<=n[i]&&n[i]<=57)
//         {
//             sum+=n[i]-'0';
//         }
//     }
//     printf("%d",sum);
// }
// 3
// #include <stdio.h>
// int main(void)
// {
//     int nx=0,ny=0;
//     int dx[4]={1,0,-1,0};
//     int dy[4]={0,1,0,-1};
//     int n,d=0;
//     int a[101][101];
//     scanf("%d",&n);
//     for(int i=1;i<=n*n;i++)
//     {
//         a[ny][nx]=i;
//         if(nx+dx[d%4]>=n||ny+dy[d%4]>=n||nx+dx[d%4]<0||ny+dy[d%4]<0||a[ny+dy[d%4]][nx+dx[d%4]]!=0)
//         {
//             d++;
//         }
//         nx+=dx[d%4];
//         ny+=dy[d%4];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }
// 4
// #include <stdio.h>
// int main(void)
// {
//     int n,m;
//     scanf("%d %d",&m,&n);
//     int num=1;
//     int a[101][101]={0};
//     for(int in=0;in<=m+n-2;in++)
//     {
//         for(int i=0;i<m;i++)
//         {
//             int j=in-i;
//             if(j>=0&&j<n)
//             {
//                 a[j][i]=num++;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int jn=0;jn<m;jn++)
//         {
//             printf("%d ",a[i][jn]);
//         }
//         printf("\n");
//     }
//     return 0;
// }