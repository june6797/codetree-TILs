#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 4 == 0)
		{
			if (i % 100 == 0 && i % 400 != 0 )
			{
				continue;
			}
			ans++;
		}
	}
	cout << ans;
}