#include <stdio.h>
#include <stdlib.h>
int graph[1001][1001];
int visited[1001];
int queue[1001];
int n, m, v;
void dfs(int x)
{
    printf("%d ", x);
    visited[x] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (graph[x][i] && !visited[i]) dfs(i);
    }
}

void bfs(int start)
{
    int front = 0, rear = 0;
    queue[rear++] = start;
    visited[start] = 1;
    while (front < rear)
    {
        int x = queue[front++];
        printf("%d ", x);
        for (int i = 1; i <= n; i++)
        {
            if (graph[x][i] && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    scanf("%d %d %d", &n, &m, &v);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    dfs(v);
    printf("\n");
    for (int i = 1; i <= n; i++) visited[i] = 0;
    bfs(v);
    return 0;
}
