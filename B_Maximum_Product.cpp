#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;
ll maxProduct(ll A[], ll n, ll k) 
{ 
	sort(A, A + n); 
	ll p = 1; 
	if (A[n - 1] == 0) 
		return 0; 
	if (A[n - 1] <= 0 ) { 
		for (int i = n - 1; i >= n - k; i--) 
			p *= A[i]; 
		return p; 
	} 
	ll i = 0; 
	ll j = n - 1; 
	if (k & 1) { 
		p *= A[j]; 
		j--; 
		k--; 
	} 
	k >>= 1; 
	for (int itr = 0; itr < k; itr++) { 
		ll left_product = A[i] * A[i + 1]; 
		ll right_product = A[j] * A[j - 1]; 
		if (left_product > right_product) { 
			p *= left_product; 
			i += 2; 
		} 
		else { 
			p *= right_product; 
			j -= 2; 
		} 
	} 
	return p; 
} 
void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<<maxProduct(arr,n,5)<<endl;
}
int main() 
{ 
	int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

	return 0; 
} 
