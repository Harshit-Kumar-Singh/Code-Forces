#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    ll ans = INT_MIN;
    for (int i = 2; i <= n/2; i++)
    {
        ll count =0;
        if(arr[1]<arr[i])
            count++;
        ll prev = arr[i];
        for (int j = i + i; j <= n; j += i)
        {
          if(prev<arr[j]){
              count++;
              prev = arr[j];
              cout<<count<<" ";
          }
        }
       
        cout<<endl;
       
    }
  // cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test;
    cin >> test;
    while (test--)
        solve();

    return 0;
}