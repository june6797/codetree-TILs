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
	cin >> str >> temp;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == temp[temp.size() - 1] && s.size() >= temp.size() - 1)
		{
			string temp1 = "";
			temp1 += str[i];
			for (int j = 0; j < temp.size() - 1; j++)
			{
				temp1 = s.top() + temp1;
				s.pop();
			}
			if (temp != temp1)
			{
				for (int j = 0; j < temp1.size(); j++)
				{
					s.push(temp1[j]);
				}
			}
		}
		else
		{
			s.push(str[i]);
		}

	}

	string ans = "";
	while (!s.empty())
	{
		ans = s.top() + ans;
		s.pop();
	}
	cout << ans;
}