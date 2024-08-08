#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int ans = 0;
	int cnt = 0;
	int sum = 0;
	while (true)
	{
		int a;
		cin >> a;
		if (a == 0 || cnt == 10)
		{
			break;
		}
		if (a % 2 == 0)
		{
			ans++;
			sum += a;
		}
		arr[cnt] = a;
	}
	cout << ans << " " << sum;
}