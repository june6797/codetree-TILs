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
	while (true)
	{
		int n; cin >> n;
		if (n == 25)
		{
			cout << "Good\n";
			break;
		}
		if (n > 25)
		{
			cout << "Lower\n";

		}
		else
		{
			cout << "Higher\n";

		}
	}
}