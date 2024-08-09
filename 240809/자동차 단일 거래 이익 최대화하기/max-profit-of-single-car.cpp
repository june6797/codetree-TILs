#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int ans = 0;
	int temp = arr[0];
	for (int i = 1; i < n; i++)
	{
		temp = min(temp, arr[i]);
		ans = max(ans, arr[i] - temp);
	}
	cout << ans;
}