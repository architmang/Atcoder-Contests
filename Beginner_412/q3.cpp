#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> s;
    s.resize(n);
   
    for(int i=0; i<n; i++)     cin >> s[i];
    
    // perform BFS
    vector<int> dist(n, INT_MAX);
    queue<int> q;
    dist[0] = 1; // domino 1

    q.push(0);
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        for(int j=k+1; j<n && s[j]<=2*s[k] ; j++)
        {
            if(dist[j] > dist[k] + 1)
            {
                dist[j] = dist[k] + 1;
                q.push(j);
            }
        }
    }
    if(dist[n-1] == INT_MAX)
        cout << "-1" << endl;
    else
        cout << dist[n-1] << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
}