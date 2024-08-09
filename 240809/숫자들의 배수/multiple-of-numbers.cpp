#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
double ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	int k = 1;
	while (cnt != 2)
	{
		if ((n * k) % 5 == 0)
		{
			cnt++;
		}
		cout << n * k << " ";
		k++;
	}
}