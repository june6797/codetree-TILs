#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int n;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	int x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		char a;
		int dist;
		cin >> a >> dist;
		switch (a)
		{
		case 'W':
			x += dx[2] * dist;
			break;
		case 'S':
			y += dy[1] * dist;
			break;
		case 'N':
			y += dy[3] * dist;
			break;
		case 'E':
			x += dx[0] * dist;
			break;
		default:
			break;
		}
	}
	cout << x << " " << y;
}