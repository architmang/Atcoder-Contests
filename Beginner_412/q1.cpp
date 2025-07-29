#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a, b;
    a.resize(n);
    b.resize(n);
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
        if(b[i]>a[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}