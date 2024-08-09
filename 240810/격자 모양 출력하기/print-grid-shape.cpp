#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int ans;
int arr[1001][1001];
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b; cin >> a >> b;
		arr[a - 1][b - 1] = a * b;
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