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
	int a;
	cin >> a;
	if (a & 1)
	{
		cout << a / 2 + 1;
	}
	else
	{
		a /= 2;
		if (a & 1)
		{
			cout << a / 2 + 1;
		}
		else
		{
			cout << a;
		}
	}
}