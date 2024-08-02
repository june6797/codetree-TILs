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
	while (n<1000)
	{
		if (n & 1)
		{
			n *= 2; n += 2;
		}
		else
		{
			n *= 3; n++;
		}
		cnt++;
	}
	cout << cnt;
}