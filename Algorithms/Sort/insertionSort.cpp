#include <bits/stdc++.h>
using namespace std;

void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void insertionSort(int arr[], int n)
{
	int key;
	for (int i = 0; i < n; i++)
	{
		key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	insertionSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}