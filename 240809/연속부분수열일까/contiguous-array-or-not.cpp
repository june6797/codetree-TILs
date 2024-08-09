#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
int arr1[1001];
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
		cin >> arr1[i];
	}
	bool f = false;
	for (int i = 0; i <= n - m; i++)
	{
		bool flag = false;
		if (arr[i] == arr1[0])
		{
			for (int j = 0; j < m; j++)
			{
				if (arr[i + j] != arr1[j])
				{
					flag = true;
					break;
				}
			}
			if (!flag)
			{
				f = true;
			}
		}
	}

	if (f)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}