#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    string s;
    cin >>s;
    if(s.length()<=10){
        cout<<s<<endl;
        return;
    }
    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;

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