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
	int a;
	cin >> a;
	if (a <= 7)
	{
		if (a & 1)
		{
			cout << 31;
		}
		else
		{
			if (a == 2)
			{
				cout << 28;
			}
			else
			{
				cout << 30;
			}
		}
	}
	else
	{
		if (a & 1)
		{
			cout << 30;
		}
		else
		{
			cout << 31;
		}
	}
}