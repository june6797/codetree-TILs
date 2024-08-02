#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int ans, sum, cnt;
int a, b, c, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		if (n % 3 != 0)
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;

}