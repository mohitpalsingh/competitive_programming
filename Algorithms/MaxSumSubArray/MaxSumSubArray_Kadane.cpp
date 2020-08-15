#include <bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[], int n)
{
	int ans = arr[0], sum = 0;
	for (int i = 1; i < n; i++)
		ans = max(ans, arr[i]);
	if (ans < 0)
		return ans;
	ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (sum + arr[i] > 0)
			sum += arr[i];
		else
			sum = 0;
		ans = max(ans, sum);
	}
	return ans;
}

int main() {

	int arr[] = {3, -2, 5, -1};
	cout << MaxSumSubArray(arr, 4) << endl;
	return 0;
}
