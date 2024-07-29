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
	cin >> a >> b >> c;
	int small = min(a, b);
	small = min(small, c);
	if (small == a)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	cout << " ";
	if (a == b && a == c)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}