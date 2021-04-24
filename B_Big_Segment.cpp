#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

int isprime[1000006] = {0};

void allPrime()
{
    for (int i = 0; i <= 1000005; i++)
        isprime[i] = 1;
    isprime[0] = isprime[1] = 0;
    for (int i = 2; i * i <= 1000005; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= 1000005; j += i)
                isprime[j] = 0;
        }
    }
    for (int i = 1; i <= 1000005; i++)
        isprime[i] += isprime[i - 1];
}

void subMain()
{
    int x, y;
    cin >> x >> y;
    if (isprime[x] > y)
        cout << "Divyam";
    else
        cout << "Chef";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    allPrime();
    cin >> t;
    while (t--)
    {
        subMain();
        cout << "\n";
    }
    return 0;
}