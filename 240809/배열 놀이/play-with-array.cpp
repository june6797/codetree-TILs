#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;
		if (a == 1)
		{
			int b;
			cin >> b;
			cout << arr[b - 1] << "\n";
		}
		else if (a == 2)
		{
			int b;
			cin >> b;
			bool flag = false;
			for (int j = 0; j < n; j++)
			{
				if (arr[j] == b)
				{
					cout << j + 1 << "\n";
					flag = true;
                    break;
				}
			}
			if (!flag)
			{
				cout << "0\n";
			}
		}
		else
		{
			int b, c;
			cin >> b >> c;
			for (int i = b; i < c + 1; i++)
			{
				cout << arr[i - 1] << " ";
			}
			cout << "\n";
		}
	}
}