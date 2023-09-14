#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int DP[1001] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 3;

	for (int i = 4; i <= n; ++i)
	{
		DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
	}

	cout << DP[n];

	return 0;
}