#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[101][101];
int cnt;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{

			for (int j = 0; j < n; j++)
			{
				cnt++;
				arr[i][j] = cnt;

			}
		}
		else
		{

			for (int j = 0; j < n; j++)
			{
				cnt++;
				arr[i][n - j - 1] = cnt;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}