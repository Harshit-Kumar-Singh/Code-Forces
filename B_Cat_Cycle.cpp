#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    if(k==1)
    if (n % 2 == 0)
    {
        if (k % n == 0)
        {
            cout << (k % n) + n << endl;
            return;
        }
        else
        {
            cout << k % n << endl;
            return;
        }
    }
    else
    {
        ll pos =-1;
        if (k % n == 0)
        {
            pos = (k%n)+n;
        }
        else
        {
            pos = k%n;
        }
        ll mid = (n/2)+1;
        float ans = ceil((k*1.0)/mid);

        ll final_ans = pos+ans;
        
        if(final_ans%n==0){
            cout<<n<<endl;
            return;
        }
        else{
            cout<<final_ans%n<<endl;
        }
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