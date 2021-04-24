#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    ll temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
        if(arr[i]%m==0){
            temp[i] = (arr[i]/m)-1;
        }
        else{
            temp[i] = arr[i]/m;
        }
    }
    //cout<<endl;
    ll idx =-1;
    ll result =INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(result<=temp[i]){
            result = temp[i];
            idx=i;
        }
    }
    cout<<idx+1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}