#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int cnt = 0;
	double sum = 0;
	for (int i = 0; i < 8; i++)
	{
		double a;
		cin >> a;
		cnt++;
		sum += a;
	}
	cout << fixed << setprecision(1) << sum / 8 << "\n";
	
}