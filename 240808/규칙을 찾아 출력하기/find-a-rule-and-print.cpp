#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

bool arr[16][16];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 2; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			arr[i][j] = true;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		arr[1][i] = 1;
		arr[n][i] = 1;
		arr[i][1] = 1;
		arr[i][n] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j])
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