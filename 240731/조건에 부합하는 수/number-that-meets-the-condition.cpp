#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int ans, sum, cnt;
int a, b, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0 && i % 4 != 0)
		{
			continue;
		}
		if ((i % 8) % 2 == 0)
		{
			continue;
		}
		if ((i % 7) <= 4)
		{
			continue;
		}
		cout << i << " ";
	}
}