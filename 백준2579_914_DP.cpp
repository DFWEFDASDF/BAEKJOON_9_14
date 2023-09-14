#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int stair[301] = { 0 };
int DP[301] = { 0 };


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> stair[i];
	}

	DP[1] = stair[1];
	DP[2] = stair[1] + stair[2];
	DP[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

	for (int i = 4; i <= n; ++i)
	{
		DP[i] = max(DP[i - 2] + stair[i], DP[i - 3] + stair[i] + stair[i - 1]);
	}

	cout << DP[n];

	return 0;
}