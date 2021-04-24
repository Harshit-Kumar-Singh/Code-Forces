
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;

int countD(ll n) 
{ 
	
	ll arr[10] = { 0 }; 
	ll count = 0; 
	while (n) { 
		ll r= n % 10; 
		arr[r] = 1; 
		n /= 10; 
	} 

	for (int i = 0; i < 10; i++) { 
		if (arr[i]) 
			count++; 
	} 
	return count; 
} 

ll countDigit(ll n) 
{ 
	ll c = 0;  
	while (n) { 
		ll r = n % 10; 
		c++; 
		n /= 10; 
	} 
	return c; 
} 

int next(ll n) 
{ 
	while (n<=9000) { 
		ll distinct_digits = countD(n + 1); 
		ll total_digits = countDigit(n + 1); 

		if (distinct_digits == total_digits) { 
			return n + 1; 
		} 

		else
			n++; 
	} 
	return -1; 
} 

int main() 
{ 
	ll n ;
    cin>>n; 

	cout << next(n)<<endl; 

	return 0; 
} 
