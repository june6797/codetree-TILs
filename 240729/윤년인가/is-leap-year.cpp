#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int y;
	cin >> y;
	if (y % 4 == 0)
	{
		if (y % 100 == 0 && y % 400 != 0)
		{
			cout << "false";
		}
		else
		{
			cout << "true";
		}
	}
	else
	{
		cout << "false";
	}
}