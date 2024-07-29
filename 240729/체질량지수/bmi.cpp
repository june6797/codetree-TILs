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
	cout.precision(1);
	cout << fixed;
	int a, b;
	cin >> a >> b;
	int c = 10000 * b / (a * a);
	cout << c;
	if (c >= 25)
	{
		cout << "\nObesity";
	}
}