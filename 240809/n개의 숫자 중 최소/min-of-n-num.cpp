#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
int arr1[1001];
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ma = -INF;
	int mi = INF;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		mi = min(mi, num);
	}
	cout << mi;
	for (int i = 0; i < n; i++)
	{
		if (mi == arr[i])
		{
			ans++;
		}
	}
	cout << " " << ans;

}