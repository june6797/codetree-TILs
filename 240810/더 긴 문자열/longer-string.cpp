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
	string str, str2;
	cin >> str >> str2;
	if (str.length() == str2.length())
	{
		cout << "same";
	}
	else if (str.length() > str2.length())
	{
		cout << str << " " << str.length();
	}
	else
	{
		cout << str2 << " " << str2.length();
	}
}