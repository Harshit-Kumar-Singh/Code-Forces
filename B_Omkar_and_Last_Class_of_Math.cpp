#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPrime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
ll greatestFactor(ll n)
{
    ll no = -1;
    for(int i=sqrt(n);i>=2;i--){
        if(n%i==0){
            no = n/i;
            //break;
        }
    }
    //cout << no << endl;
    return no;
}
void solve()
{
    ll n;
    cin >> n;
    //cout<<n<<endl;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
    }
    else if (n & 1)
    {
        if (isPrime(n))
        {
            cout << n - 1 << " " << 1 << endl;
        }
        else
        {
            ll x = greatestFactor(n);
            cout<<x<< " "<<n-x<<endl;
        }
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