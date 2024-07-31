#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int ans, sum, cnt;
int a, b, n;

bool solve() {
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i; 
		}
	}
	if (sum == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	if (solve())
	{
		cout << "P";
	}
	else
	{
		cout << "N";
	}
}