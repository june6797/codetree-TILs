#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {

		for (int j = 0; j < n - i; j++)
		{
			cout << "  ";
		}

		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "* ";
		}
	
		cout << "\n";
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
}