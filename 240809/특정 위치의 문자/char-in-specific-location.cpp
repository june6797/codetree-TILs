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
	char a[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };
	char b;
	cin >> b;
	for (int i = 0; i < 6; i++)
	{
		if (a[i] == b)
		{
			cout << i;
			return 0;
		}
	}
	cout << "None";
}