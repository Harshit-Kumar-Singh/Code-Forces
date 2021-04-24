#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll arr[3][3];
    ll sum[3] = {0};
    for (int i = 0; i < 3; i++)
    {

        ll x = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            x += arr[i][j];
        }
        sum[i] = x;
    }
    
    ll ans = (sum[1]) / 2;

    arr[1][1] = ans;
    arr[0][0] = abs(sum[0] - (arr[0][1] + arr[1][1] + arr[2][1]));
    arr[2][2] = abs(sum[2] - (arr[0][1] + arr[1][1] + arr[2][1]));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}