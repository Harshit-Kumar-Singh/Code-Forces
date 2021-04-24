#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{   
    ll sum=0;
    for(int i=1;i<=3;i++){
        ll x;
        cin >> x;
        sum+=x;
    }
    if(sum%2==0){
        cout<<sum/2<<endl;
    }
    else{
        cout<<sum/2<<endl;
    }

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