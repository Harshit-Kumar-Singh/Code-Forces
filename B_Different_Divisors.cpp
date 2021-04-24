#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 100000;
vector<ll> make_sieve()
{

    bool isPrime[N + 1];
    for (int i = 0; i <= N; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<ll> v;
    for (int i = 0; i <= N; i++)
    {
        if (isPrime[i])
        {
            v.push_back(i);
            // cout<<i<<endl;
        }
    }
    return v;
}
void solve(vector<ll> primes)
{
    ll d;
    cin >> d;
    
    ll ele ;
    ll idx =-1;
    for (int i = 0; i <= N; i++)
    {
        if((primes[i]-1)>=d){
            ele  = primes[i];
            idx =-1;
            break;
        }
    }
    for(int i=idx+1;i<=N;i++){
        if((primes[i]-ele)>=d){
            cout<<ele*primes[i]<<endl;
            break;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test;
    vector<ll> primes = make_sieve();
    cin >> test;
    while (test--)
    {
        solve(primes);
    }
    return 0;
}