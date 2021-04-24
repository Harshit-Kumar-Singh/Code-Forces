#include <iostream>
#include <math.h>
#define ll unsigned long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    bool flag = false;
    ll t, N;
    cin >> t;
    while (t--)
    {
        cin >> N;
        flag = false;
        for (int i = 1; i <= (ll)cbrtl(N / 2); i++)
        {
            if (!(cbrtl(N - i * i * i) - (ll)cbrtl(N - i * i * i)))
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}