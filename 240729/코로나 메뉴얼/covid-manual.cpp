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
	int d;
	int cnt = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> d;
		if (a == 'Y' && d >= 37)
		{
			cnt++;
		}
	}
	
	if (cnt >= 2)
	{
		cout << "E";
	}
	else
	{
		cout << "N";
	}
}