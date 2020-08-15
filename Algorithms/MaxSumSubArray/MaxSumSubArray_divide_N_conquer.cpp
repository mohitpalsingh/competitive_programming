#include <bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[], int n)
{
	if (n == 1)
		return arr[0];

	int m = n / 2;
	int left_MMS = MaxSumSubArray(arr, m);
	int right_MMS = MaxSumSubArray(arr, n - m);

	int leftsum = INT_MIN, rightsum = INT_MIN, sum = 0;
	for (int i = m; i < n; i++)
	{
		sum += arr[i];
		rightsum = max(rightsum, sum);
	}
	sum = 0;
	for (int i = m - 1; i >= 0; i--)
	{
		sum += arr[i];
		leftsum = max(leftsum, sum);
	}
	int ans = max(left_MMS, right_MMS);
	return max(ans, leftsum + rightsum);
}

int main() {

	int arr[] = {3, -2, 5, -1};
	cout << MaxSumSubArray(arr, 4) << endl;
	return 0;
}
