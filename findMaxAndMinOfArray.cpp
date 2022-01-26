
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
    	int n;
    	cin >> n;
    	int arr[n];

    	for (int i = 0; i < n; i++)
    	{
    		cin >> arr[i];
    	}
    	
    	sort(arr,arr+n);
    	cout << "min " << arr[0] << " max " << arr[n-1] << endl;
    }
    return 0;
}

// Submitted by apkharsh