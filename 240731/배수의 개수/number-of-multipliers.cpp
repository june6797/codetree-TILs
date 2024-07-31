#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		if (num % 3 == 0)
		{
			ans1++;
		}
		if (num % 5 == 0)
		{
			ans2++;
		}

	}
	cout << ans1 << " " << ans2;
}