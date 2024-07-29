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
	int a, b;
	cin >> a >> b;
	if (a & 1)
	{
		cout << "odd";
	}
	else
	{
		cout << "even";
	}
	cout << "\n";
	if (b & 1)
	{
		cout << "odd";
	}
	else
	{
		cout << "even";
	}
}