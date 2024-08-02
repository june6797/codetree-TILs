#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int ans, sum, cnt;
int a, b, c, n, m;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * (i + 1) - 1; j++)
		{
			if (j & 1)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * n - 2 * (i + 1); j++)
		{
			if (j & 1)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
}