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
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int t = i;
		int j = 0;
		while (t >= 0)
		{
			arr[j][t] = ++ans;
			t--;
			j++;
		}
	}
	for (int i = 1; i < n; i++)
	{
		int t = i;
		int j = m - 1;
		while (t < n)
		{
			arr[t][j] = ++ans;
			t++;
			j--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}