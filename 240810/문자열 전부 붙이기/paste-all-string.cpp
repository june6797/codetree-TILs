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
	string temp = "";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str; cin >> str;
		temp += str;
	}
	cout << temp;
}