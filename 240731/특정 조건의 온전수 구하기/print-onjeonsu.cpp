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
		if (i % 2 == 0)
		{
			continue;
		}
		if (i % 10 == 5)
		{
			continue;
		}
		if (i % 3 == 0 && i  % 9 != 0)
		{
			continue;
		}
		cout << i << " ";
	}
}