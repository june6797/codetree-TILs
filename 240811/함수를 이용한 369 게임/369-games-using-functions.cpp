#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int ans, cnt;
bool check(int n) {
	if (n % 3 == 0)
	{
		return true;
	}
	string str = to_string(n);
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '3' || str[i] == '6' || str[i] == '9')
		{
			return true;
		}
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (check(i))
		{
			ans++;
		}
	}
	cout << ans;
}