#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1234567890
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int arr[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	arr[0] = arr[1] = 1;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		bool check[1001] = { false, };
		for (int j = 0; j <= i/2; j++)
		{
			int temp = 2 * arr[i - j] - arr[i - 2 * j];
			check[temp] = true;
		}
		for (int j = 0; j <= n; j++)
		{
			if (!check[j])
			{
				arr[i] = j;
				break;
			}
		}
	}
	cout << arr[n];
}