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
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int num; cin >> num;
		if (num == 1)
		{
			int a, b;
			cin >> a >> b;
			if (a > b)
			{
				swap(a, b);
			}
			char temp = str[a - 1];
			for (int j = 0; j < str.size(); j++)
			{
				if (j == a-1)
				{
					cout << str[b - 1];
					str[j] = str[b - 1];
				}
				else if (j == b - 1)
				{
					cout << temp;
					str[j] = temp;
				}
				else
				{
					cout << str[j];
				}
			}
			cout << "\n";
		}
		else
		{
			char a, b;
			cin >> a >> b;
			for (int j = 0; j < str.size(); j++)
			{
				if (str[j] == a)
				{
					cout << b;
					str[j] = b;
				}
				else
				{
					cout << str[j];
				}
			}
			cout << "\n";
		}
	}
}