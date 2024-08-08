#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		ans = 0;
		int m;
		cin >> m;
		while (m != 1)
		{
			ans++;
			if (m % 2)
			{
				m *= 3;
				m++;
			}
			else
			{
				m /= 2;
			}
		}
		cout << ans << "\n";
	}
}