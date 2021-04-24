#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    long double Interior_angle;
    cin >> Interior_angle;
    long double n = (360*1.0)/(180-Interior_angle);
    //cout<<n<<endl;
    if(abs(n-ll(n)==0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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