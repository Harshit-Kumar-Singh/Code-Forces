#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    string s;
    cin >> s;
    for(int i=0;i<s.length();i+=2){
        if(s[i]=='a'){
            s[i] ='b';
        }
        else{
            s[i] ='a';
        }
    }
    for(int i=1;i<s.length();i+=2){
        if(s[i]=='z'){
            s[i] ='y';
        }
        else{
            s[i] ='z';
        }
    }
    cout<<s<<endl;

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