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
	char a;
	int n;
	cin >> a >> n;
	if (a == 'A')
	{

		for (int i = 1; i <= n; i++)
		{
			cout << i << " ";
		}
	}
	else
	{
		for (int i = n; i >= n; i--)
		{
			cout << i << " ";
		}

	}

}