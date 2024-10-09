#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1234567890
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int arr[1005];

int ans = 0;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		vector<int> v;
		int temp = arr[i];
		for (int j = 0; j < n; j++)
		{
			if (temp != arr[j])
			{
				v.push_back(arr[j]);
			}
		}
		int last = -1;
		int cnt = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == last)
			{
				cnt++;
			}
			else
			{
				last = v[i];
				cnt = 0;
			}
			ans = max(ans, cnt);
		}
	}
	cout << ans;
}