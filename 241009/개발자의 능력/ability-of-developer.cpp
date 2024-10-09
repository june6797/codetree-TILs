#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1234567890
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int arr[1001];
int ability[12];
int wh[12] = { 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int ans = INF;

	for (int i = 0; i < 12; i++)
	{
		cin >> ability[i];
	}

	do
	{
		int team[4] = { 0, };
		for (int i = 0; i < 12; i++)
		{
			team[wh[i]] += ability[i];
		}
		sort(team, team + 4);
		ans = min(ans, team[3] - team[0]);
	} while (next_permutation(wh, wh + 12));
	cout << ans;
}