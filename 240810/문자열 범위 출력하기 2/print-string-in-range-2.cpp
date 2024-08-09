#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

vector<int> v;
string str[21];
int ans, cnt;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
	int n;
	cin >> n;
	for (int i = 0; i < min((int)str.size(), n); i++)
	{
		cout << str[str.size() - 1 - i];
	}
}