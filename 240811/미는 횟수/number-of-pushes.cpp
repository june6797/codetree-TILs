#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

vector<string> v;
int ans, cnt;
int arr[26];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		ans++;
		a = a[a.size() - 1] + a;
		a.erase(a.end() - 1);
		if (a == b)
		{
			break;
		}
	}
	cout << ans;
}