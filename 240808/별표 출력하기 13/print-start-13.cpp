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
	for (int i = 1; i <= 2 * n; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 0; j < n - (i / 2); j++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
		else
		{
			for (int j = 0; j < (i / 2); j++)
			{
				cout << "* ";

			}
			cout << "\n";
		}
	}

}