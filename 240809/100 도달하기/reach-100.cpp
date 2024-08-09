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
	int cnt = 0;
	arr[0] = 1;
	cin >> arr[1];
	cout << 1 << " " << arr[1] << " ";
	for (int i = 2; i < 20; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		cout << arr[i] << " ";
		if (arr[i] > 100)
		{
			break;
		}
	}

}