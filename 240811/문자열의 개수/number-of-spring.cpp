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
	while (true)
	{
		string temp;
		cin >> temp;
		if (temp == "0")
		{
			break;
		}
		ans++;
		if (ans % 2 == 1)
		{
			v.push_back(temp);
		}
	}
	cout << ans << "\n";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
}