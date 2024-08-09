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
	cin >> arr[1] >> arr[2];
	for (int i = 3; i <= 10; i++)
	{
		arr[i] = arr[i - 1] + 2 * arr[i - 2];
	}
	for (int i = 1; i < 11; i++)
	{
		cout << arr[i] << " ";
	}
}