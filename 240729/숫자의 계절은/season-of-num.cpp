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
	cin >> a;
	if (a >= 3 && a <= 5)
	{
		cout << "Spring";
	}
	else if (a >= 6 && a <= 8)
	{

		cout << "Summer";
	}
	else if (a >= 9 && a <= 11)
	{
		cout << "Fall";

	}
	else
	{
		cout << "Winter";
	}
}