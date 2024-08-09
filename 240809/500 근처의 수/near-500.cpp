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

	int ans = 0, ans2 = 10001;
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		if (num < 500)
		{
			ans = max(ans, num);
		}
		else
		{
			ans2 = min(ans2, num);
		}
	}
	cout << ans << " " << ans2;
}