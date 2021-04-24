#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    ll sum1 =0;
    ll sum2 =0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        
    }
    sort(arr,arr+n);
    for(int i=0;i<(n/2);i++)
        sum1+=arr[i];
    for(int i=n/2;i<n;i++)
        sum2+=arr[i];
    //cout<<sum1<<" "<<sum2<<endl;
   cout<<sum1*sum1 + sum2*sum2<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
   
        solve();
    
    return 0;
}