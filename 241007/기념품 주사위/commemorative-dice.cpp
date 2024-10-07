#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1234567890
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int a[6];
int b[6];

int gcd(int a, int b) {
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cin >> b[i];
	}
	int cnt = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (a[i] > b[j])
			{
				cnt++;
			}
		}
	}
	int k = gcd(cnt, 36);
	cout << cnt / k << "/" << 36 / k;
}