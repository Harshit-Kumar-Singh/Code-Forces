// C++ program to implement 
// the above approach 

#include <bits/stdc++.h> 
using namespace std; 

// Function to count all pairs 
// whose sum is a power of two 
int countPair(int arr[], int n) 
{ 
	// Stores the frequency of 
	// each element of the array 
	map<int, int> m; 

	// Update frequency of 
	// array elements 
	for (int i = 0; i < n; i++) 
		m[arr[i]]++; 

	// Stores count of 
	// required pairs 
	int ans = 0; 

	for (int i = 0; i < 31; i++) { 

		// Current power of 2 
		int key = pow(2, i); 

		// Traverse the array 
		for (int j = 0; j < n; j++) { 

			int k = key - arr[j]; 

			// If pair does not exist 
			if (m.find(k) == m.end()) 
				continue; 

			// Increment count of pairs 
			else
				ans += m[k]; 

			if (k == arr[j]) 
				ans++; 
		} 
	} 

	// Return the count of pairs 
	return ans / 2; 
} 

// Driver Code 
int main() 
{ 
	int arr[] = { 1, 8, 2, 10, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << countPair(arr, n) << endl; 

	return 0; 
}
