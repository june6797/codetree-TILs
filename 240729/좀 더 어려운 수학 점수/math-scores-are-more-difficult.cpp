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
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > c)
	{

		cout << "A";
	}
	else if (a < c)
	{

		cout << "B";
	}
	else
	{
		if (b > d)
		{
			cout << "A";

		}
		else if (b < d)
		{
			cout << "B";
		}
	}
}