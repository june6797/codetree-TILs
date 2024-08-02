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
	cin >> a >> b >>c;
	for (int i = a; i <= b; i++)
	{
		if (i % c == 0)
		{
			cout << "YES";
			return;
		}
	}
	cout << "NO";

}