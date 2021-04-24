#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll M[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           M[i][j] = 0;
        }
       
    }
    for(int i = 0;i<n;i++)
    {
        cin>> arr[i];
        M[i][i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
   // cin >> t;
    while (t--)
    {
        solve();
    }
}