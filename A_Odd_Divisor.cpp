#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{   
    ll n;
    cin >> n;
    if(n&(n-1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   

}
int main()
{
    ios::sync_with_stdio(0);
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