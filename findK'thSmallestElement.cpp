
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		int arr[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}

		sort(arr,arr+n);
		cout << arr[k-1] << endl;
	}
	return 0;
}

// Submitted by apkharsh