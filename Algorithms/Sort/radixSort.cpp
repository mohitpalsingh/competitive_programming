#include <bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n, int emp)
{
	int output[n];

	int count[10] = {0};
	for (int i = 0; i < n; i++)
		count[(arr[i] / emp) % 10]++;

	for (int i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (int i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / emp) % 10]] = arr[i];
		count[(arr[i] / emp) % 10] -= 1;
	}

	for (int i = 0; i <= n; i++)
		arr[i] = output[i + 1];
}

void radixSort(int arr[], int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	for (int emp = 1; max / emp > 0; emp *= 10)
	{
		countingSort(arr, n, emp);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	radixSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
