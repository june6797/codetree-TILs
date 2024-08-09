#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

vector<int> v;
string str[10];
int ans, cnt;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
    cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	char a;
	cin >> a;
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		if (str[i][0] == a)
		{
			cnt++;
			ans += str[i].size();
		}
	}
	cout << cnt << " " << fixed << setprecision(2) << double(ans) / cnt;
}