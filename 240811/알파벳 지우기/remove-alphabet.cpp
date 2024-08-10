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
		if (str[i] >= '0' && str[i] <= 9)
		{
			q += str[i];
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (str[i] >= '0' && str[i] <= 9)
		{
			w += str[i];
		}
	}
	cout << stoi(q + w);
}