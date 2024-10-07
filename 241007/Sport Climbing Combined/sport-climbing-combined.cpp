#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1234567890
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int a[6];
int b[6];
vector<pair<int, pii>> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		v.push_back({ b * c * d, { b + c + d, a } });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++)
	{
		cout << v[i].second.second << " ";
	}
}