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
	string str;
	cin >> str;
	bool a = false, b = false;
	for (int i = 0; i < str.size() - 1; i++)
	{
		if (str[i] == 'e' && str[i + 1] == 'e')
		{
			a = true;
		}
		if (str[i] == 'a' && str[i + 1] == 'b')
		{
			b = true;
		}
	}
	if (a)
	{
		cout << "Yes ";
	}
	else
	{
		cout << "No ";
	}
	if (b)
	{
		cout << "Yes ";
	}
	else
	{
		cout << "No ";
	}
}