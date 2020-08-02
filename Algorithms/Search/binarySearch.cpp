#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		else
			return binarySearch(arr, mid + 1, r, x);
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
	int result = binarySearch(arr, 0, n - 1, x);
	if (result == -1)
		cout << "not present";
	else
		cout << "at " << result;
	return 0;
}
