#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll convertToInt(string str)
{
	ll ans=0;
	ll p=1;
	for(ll i=str.size()-1;i>=0;i--)
	{
		ans +=((str[i])-'0')*p;
		p *=10;
	}
	return ans;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    while (k != 0)
    {
        string s = to_string(n);
        string str1 = s;
        sort(str1.begin(), str1.end());
        string str2 = s;
        sort(str2.begin(), str2.end(), greater<char>());
        ll n1 = convertToInt(str1);
        ll n2 = convertToInt(str2);
        n  = abs(n1-n2);
        k--;
    }
    cout<<n<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}