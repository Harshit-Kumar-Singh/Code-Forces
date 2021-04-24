#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    unordered_set<char> s;
    for (int i = 0; i < k; i++)
    {
        char ch;
        cin >> ch;
        s.insert(ch);
    }
    ll count = 0;
    ll ans = 0;
    vector<ll> v;

    for (int i = 0; i < str.length(); i++)
    {
        if (s.find(str[i])!= s.end())
        {
            count++;
        }
        else{
            v.push_back(count);
            count=0;
        }

    }
    if(count!=0){
        v.push_back(count);
    }
    for(auto x:v){
        ans +=((x*(x+1))/2);
    }
   cout << ans << endl;
}
int main()
{
    solve();
}
if(sum<=t){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
        if(v[x-1]==0){
            sum++;
        }
        else{
            sum--;
        }
        v[x-1] = 1-v[x-1];