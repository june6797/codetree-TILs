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

	int ans = 999;
	int ans2 = -999;
	for (int i = 0; i < 1000; i++)
	{
		int num; cin >> num;
		if (num == -999 || num == 999)
		{
			break;
		}
		ans = min(ans, num);
		ans2 = max(ans2, num);
	}
	cout << ans2 << " " << ans;

}