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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 2)
		{
			cnt++;
		}
		if (cnt == 3)
		{
			cout << i + 1;
			break;
		}
	}
}