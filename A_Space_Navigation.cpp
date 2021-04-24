#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    ll U = 0, R = 0, L = 0, D = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'U')
        {
            U++;
        }
        else if (s[i] == 'R')
        {
            R++;
        }
        else if (s[i] == 'L')
        {
            L++;
        }
        else
        {
            D++;
        }
    }
    //cout<<U<<" "<<R<<" "<<L<<" "<<D<<endl;
    if (x < 0 )
    {
        if(y>0){
            if(L<abs(x) or U<abs(y)){
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(L<abs(x) or D<abs(y)){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    else{
        if(y>0){
            if(R<abs(x) or U<abs(y)){
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(R<abs(x) or D<abs(y)){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    return;
    
    
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