#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

string str[5] = { "apple", "banana", "grape", "blueberry", "orange" };
vector<int> v;
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char a;
	cin >> a;
	for (int i = 0; i < 5; i++)
	{
		if (str[i][2] == a || str[i][3] == a)
		{
			cout << str[i] << "\n";
			ans++;
		}
	}
	cout << ans;
}