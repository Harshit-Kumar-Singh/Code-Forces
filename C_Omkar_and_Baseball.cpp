#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll dp[n];
    int i = 0;
    if(arr[0]>arr[1]){
        dp[0] =0;
        i=i+1;
    }
    while (i < n-1)
    {
        if (arr[i] > arr[i + 1])
        {
            dp[i + 1] = 0;
            i += 2;
        }
        else
        {
            dp[i] = 1;
            dp[i+1] =1;
            i++;
        }
    }
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(dp[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}