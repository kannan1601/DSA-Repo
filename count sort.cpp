#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout << "enter n\n";
	
	cin >> n;
	int k; // range of elements in the array....if the range isnt given find maximum element in the give array and make that one as k
	cout << "enter k\n";
	cin >> k;
	int a[n];
	cout << "enter elements\n";
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int count[k + 1];
	for(int i = 0; i <= k; i++)
	{
		count[i] = 0;
	}
	for(int i = 0; i < n; i++)
	{
		count[a[i]]++;
	}
	//modifying count array
	for(int i = 1; i <= k; i++)
	{
		count[i] = count[i - 1] + count[i];
	}
	int res[n];
	//traversing from the last to maintain stability of the algorithm
	for(int i = n - 1; i >= 0; i--)
	{
		res[count[a[i]] - 1] = a[i];
		count[a[i]]--;
	}
	cout << "output\n";
	for(int i = 0; i < n; i++)
	{
		cout << res[i] << " ";
	}
	
}
