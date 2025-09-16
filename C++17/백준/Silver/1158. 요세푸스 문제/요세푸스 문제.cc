#include <iostream>
#include <queue>
using namespace std;
int main(void)
{   
    queue<int> q;
    int n,m,j=0,a[10000];
    cin >> n;
    cin >> m;
    cout << "<";
    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        for(int i=0;i<m-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
        a[j]=q.front();
        q.pop();
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i];
        if(i!=n-1)
        {
            cout << ", ";
        }
    }
    cout << ">";
}