#include <bits/stdc++.h>
using namespace std;

int interpolationSearch(int arr[], int n, int x)
{
	int low = 0, high = (n - 1);

	while (low <= high && x >= arr[low] && x <= arr[high])
	{
		if (low == high)
		{
			if (arr[low] == x)
				return low;
			else
				return -1;
		}
		// Formula for position according to the distribution
		int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]));

		if (arr[pos] == x)
			return pos;
		else if (arr[pos] < x)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return -1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);

	int n, x; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;
	int index = interpolationSearch(arr, n, x);

	if (index == -1)
		cout << "not present";
	else
		cout << "at " << index;
	return 0;
}
