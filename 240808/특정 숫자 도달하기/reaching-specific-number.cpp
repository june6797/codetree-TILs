#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int ans;
bool check(int n) {
	int temp = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			temp ++;
		}
	}
	if (temp == 2)
	{
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int cnt = 0;
	double sum = 0;
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		if (a >= 250)
		{
			break;
		}
		cnt++;
		sum += a;
	}
	cout << sum << " " << fixed << setprecision(1) << sum / cnt;
}