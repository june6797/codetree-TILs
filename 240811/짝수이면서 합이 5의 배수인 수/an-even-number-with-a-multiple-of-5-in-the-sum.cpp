#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int ans, cnt;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	if ((n % 10 + n / 10) % 5 == 0 && n % 2 == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}