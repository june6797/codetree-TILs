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
string str, temp;
stack<char> s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int n; cin >> n;
		if (n == 1)
		{
			str = str + str[0];
			str.erase(str.begin());
		}
		else if (n == 2)
		{
			str = str[str.size() - 1] + str;
			str.erase(str.end() - 1);

		}
		else
		{
			reverse(str.begin(), str.end());
		}
		cout << str << "\n";
	}
}