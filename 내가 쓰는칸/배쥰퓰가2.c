// 2563문제
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int paper[100][100] = {0};
    int totalArea = 0;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        for(int row = y; row < y + 10; row++)
        {
            for(int col = x; col < x + 10; col++)
            {
                if(paper[row][col] == 0)
                {
                    paper[row][col] = 1;
                    totalArea++;
                }
            }
        }
    }
    printf("%d\n",totalArea);
    return 0;
}