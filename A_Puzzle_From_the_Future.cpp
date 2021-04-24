#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string str = "1";
    ll k = 1;
    for (int i = 1; i < n; i++)
    {
        ll n1 = int(s[i-1]-'0');
        ll n2 = int(str[i-1]-'0');
        ll num = int(s[i]-'0');
        if((n1+n2) != (num+n2)){
            if(n1+n2==0 and num+n2==1){
                str+='1';
            }
            else
            str +=str[i-1];
        }
        else{
            if(str[i-1]=='0'){
                str+='1';
            }
            else{
                str+='0';
            }
        }
    }
    cout<<str<<endl;
    
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