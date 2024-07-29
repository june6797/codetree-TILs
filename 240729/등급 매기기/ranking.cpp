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
	if (a >= 90)
	{
		cout << "A";
	}
	else if (a >= 80)
	{
		cout << "B";
	}
	else if (a >= 70)
	{
		cout << "C";
	}
	else if (a >= 60)
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}
}