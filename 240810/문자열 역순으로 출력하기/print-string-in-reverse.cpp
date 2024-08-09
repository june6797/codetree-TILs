#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

string str[100];
vector<int> v;
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	for (int i = 0; i < 4; i++)
	{
		cin >> str[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cout << str[3 - i] << "\n";
	}
}