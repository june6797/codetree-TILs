#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
vector<int> v;
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		arr[num]++;
	}
	for (int i = 1000; i > 0; i--)
	{
		if (arr[i] == 1)
		{
			cout << i;
			return 0;
		}
	}
	cout << -1;
}