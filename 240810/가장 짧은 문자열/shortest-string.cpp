#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int ans;
int arr[1001][1001];
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string str, str2, str3;
	cin >> str >> str2 >> str3;

	ans = abs((int)str.length() - (int)str2.length());
	ans = max(ans, abs((int)str.length() - (int)str3.length()));
	ans = max(ans, abs((int)str2.length() - (int)str3.length()));
	cout << ans;
}