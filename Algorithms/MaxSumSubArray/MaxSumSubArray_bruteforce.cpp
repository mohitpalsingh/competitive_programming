#include <bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[], int n)
{
	int ans = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 1; j <= n && j + i <= n; j++)
		{
			sum += arr[i + j - 1];
			ans = max(ans, sum);
		}
	}
	return ans;
}

int main() {

	int arr[] = {3, -2, 5, -1};
	cout << MaxSumSubArray(arr, 4) << endl;
	return 0;
}
