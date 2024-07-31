#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int ans, sum;
int a, b, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i % 5 == 0 || i % 7 == 0)
		{
			sum += i;
			ans ++;
		}
	}
	cout << sum << " " << fixed <<setprecision(1) << double(sum)/ans;
}