#include <bits/stdc++.h>
using namespace std;

void bucketSort(float arr[], int n)
{
	vector <float> v[n];

	for (int i = 0; i < n; i++)
	{
		int bi = arr[i] * n;
		v[bi].push_back(arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		sort(v[i].begin(), v[i].end());
	}
	int long index = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			arr[index] = v[i][j];
			index++;
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	float arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	bucketSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
