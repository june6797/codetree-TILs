#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{

		int num;
		int cnt = 0;
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> num;
			sum += num;
		}
		if (sum / 4 >= 60)
		{
			cout << "pass\n";
			ans++;
		}
		else
		{
			cout << "fail\n";
		}
	}
	cout << ans;
}