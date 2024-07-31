#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int ans, sum, cnt;
int a, b, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b;
	for (int i = 1; i <= 10; i++)
	{
		int num;
		cin >> num;
		if (num >= 0 && num <= 200)
		{
			sum += num;
			cnt++;
		}
	}
	cout << sum << " " << fixed << setprecision(1) << (double)sum / cnt;
}