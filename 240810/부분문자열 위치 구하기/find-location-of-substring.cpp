#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

vector<int> v;
int ans, cnt;
int arr[26];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
	ans = -1;
	string t;
	cin >> t;
	for (int i = 0; i < str.size() - t.size(); i++)
	{
		bool flag = false;
		for (int j = 0; j < t.size(); j++)
		{
			if (str[i + j] != t[j])
			{
				flag = true;
			}
		}
		if (!flag)
		{
			ans = i;
			break;
		}
	}
	cout << ans;
}