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
	int n;
	cin >> n;
	int a = 0, b = 0, c = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 12 == 0)
		{
			c++;
		}
		else if (i % 3 ==0)
		{
			b++;
		}
		else if (i % 2 == 0)
		{
			a++;
		}
	}
	cout << a << " " << b << " " << c;
}