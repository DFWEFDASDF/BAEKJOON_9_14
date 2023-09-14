#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int arr[1001] = { 0 };
int DP[1001] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	int ans = 0;

	for (int i = 1; i <= n; ++i)
	{
		DP[i] = 1;

		for (int j = 1; j <= n - 1; ++j)
		{
			if (arr[i] > arr[j])
			{
				DP[i] = max(DP[i], DP[j] + 1);
			}
		}

		ans = max(DP[i], ans);
	}

	cout << ans;

	return 0;
}