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
	for (int i = 1; i <= 2 * n + 1; i++)
	{
		if (i % 2)
		{
			for (int j = 1; j <= 2 * n + 1; j++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
		else
		{
			for (int j = 1; j <= 2 * n + 1; j++)
			{
				if (j % 2 == 1)
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << "\n";
		}
	}

}