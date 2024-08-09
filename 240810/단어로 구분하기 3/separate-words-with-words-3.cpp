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
	for (int i = 0; i < 10; i++)
	{
		cin >> str[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << str[9 - i] << " ";
	}
}