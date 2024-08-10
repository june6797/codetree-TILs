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
	string a, b;
	cin >> a >> b;
	string q = "", w = "";
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= '0' && a[i] <= 9)
		{
			q += a[i];
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] >= '0' && b[i] <= 9)
		{
			w += b[i];
		}
	}
	cout << stoi(q + w);
}