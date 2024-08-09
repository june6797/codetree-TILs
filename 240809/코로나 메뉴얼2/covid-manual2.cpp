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
	for (int i = 0; i < 3; i++)
	{
		char a;
		int n;
		cin >> a >> n;
		if (a == 'Y' && n >= 37)
		{
			arr[0]++;
		}
		else if (a == 'Y' && n < 37)
		{
			arr[2]++;
		}
		else if (n >= 37)
		{
			arr[1]++;
		}
		else
		{
			arr[3]++;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " ";
	}
	if (arr[0] >= 2)
	{
		cout << "E";
	}
}