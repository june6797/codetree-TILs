#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int ans;
int arr[1001][1001];
int arr2[1001][1001];
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n;
	ans = n * n;
	if (n % 2)
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 1)
			{

				for (int j = 0; j < n; j++)
				{
					arr[n - j - 1][i] = ans--;
				}
			}
			else
			{

				for (int j = 0; j < n; j++)
				{
					arr[j][i] = ans--;
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
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{

				for (int j = 0; j < n; j++)
				{
					arr[n - j - 1][i] = ans--;
				}
			}
			else
			{

				for (int j = 0; j < n; j++)
				{
					arr[j][i] = ans--;
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
	
}