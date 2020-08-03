#include <bits/stdc++.h>
using namespace std;

void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void bubbleSort(int arr[], int n)
{
	bool swapped;
	for (int i = 0; i < n - 1; i++)
	{
		swapped = false;
		if (arr[i] > arr[i + 1])
		{
			swap(&arr[i], &arr[i + 1]);
			swapped = true;
		}
		if (swapped == true)
			bubbleSort(arr, n - 1);
		else
			break;
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

	bubbleSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}