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
	int a, b;
	cin >> a >> b;
	int ans = 0;
	while (a > 1)
	{
		arr[a % b]++;
		a = a / b;
	}
	for (int i = 0; i < 1000; i++)
	{
		ans += (arr[i] * arr[i]);
	}
    cout << ans;
}