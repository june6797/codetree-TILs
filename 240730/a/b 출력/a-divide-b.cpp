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
	int temp = a / b;
	cout << temp << ".";

	int c = a % b;

	int i = 0;

	while (i <= 19)
	{
		c *= 10;
		cout << c / b;
		c = c % b;
		i++;
	}

}