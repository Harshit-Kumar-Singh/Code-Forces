#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll k = n + 2;
    vector<ll> v;
    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        v.emplace_back(x);
    }
    ll csum[k];
    csum[0] = v[0];
    for (int i = 1; i < k; i++)
    {
        csum[i] = csum[i - 1] + v[i];
    }
    //cout << csum[k - 1] << endl;
    ll first_max = INT_MIN;
    ll idxM = -1;
    for (int i = 0; i < k; i++)
    {
        if (v[i] > first_max)
        {
            first_max = v[i];
            idxM = i;
        }
    }
    ll second_max = INT_MIN;
    ll idxM2 = -1;
    for (int i = 0; i < k; i++)
    {
        if (i == idxM)
            continue;
        if (v[i] > second_max)
        {
            second_max = v[i];
            idxM2 = i;
        }
    }
    ll second_idx = -1;
    ll second_idx2 = -1;
   // cout << first_max << " " << idxM << " " << second_max << " " << idxM2 << endl;
    for (int i = 0; i < k; i++)
    {
        if (csum[k - 1] - v[i] - first_max == first_max and i!=idxM)
        {
            second_idx = i;
            break;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (csum[k - 1] - v[i] - second_max == second_max and i!=idxM2)
        {
            second_idx2 = i;
            break;
        }
    }
    if (second_idx != -1)
    {
        for (int i = 0; i < k; i++)
        {
            if (i == second_idx || i == idxM)
            {
              //  cout<< second_idx<<" ";
                continue;
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        cout<<endl;
    }
    else if (second_idx2 != -1)
    {
        for (int i = 0; i < k; i++)
        {
            if (i == second_idx2 || i == idxM2)
            {
                continue;
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        cout<<endl;
    }
    else {
        cout<<-1<<endl;
    }

    // cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}