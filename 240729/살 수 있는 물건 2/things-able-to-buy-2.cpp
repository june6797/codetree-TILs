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
	if (a >= 3000)
	{
		cout << "book";
	}
	else if (a >= 1000) {
		cout << "mask";
	}
	else if (a >= 500)
	{
		cout << "pen";
	}
	else
	{
		cout << "no";
	}
}