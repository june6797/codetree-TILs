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
	string temp = "";
	for (int i = 0; i < str.size(); i++)
	{
		int cnt = 1;
		temp += str[i];
		while (str[i] == str[i + 1])
		{
			cnt++;
			i++;
		}
		temp += to_string(cnt);
	}
	cout << temp.size() << "\n" << temp;
}