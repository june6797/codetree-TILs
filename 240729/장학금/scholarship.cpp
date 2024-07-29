#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a, b, c, d;
	cin >> a >> b;
	if (a >= 90)
	{
		if (b >= 95)
		{
			cout << 100000;
		}
		else if (b >= 90)
		{
			cout << 50000;
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << 0;
	}
}