#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

vector<pii> v1;
vector<pii> v2;
int ans, cnt;
int arr[26];

bool cmp(pii a, pii b) {
	if (a.second > b.second)
	{
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	v1.push_back({ 0, 0 });
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a < b)
		{
			v1.push_back({ a, b });
		}
		else
		{
			v2.push_back({ a, b });
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), cmp);
	for (int i = 0; i < v2.size(); i++)
	{
		v1.push_back(v2[i]);
	}
	int temp = 0;
	int two = 0;
	for (int i = 1; i < v1.size(); i++)
	{
		ans += v1[i].first;
		temp = (v1[i - 1].second + two - v1[i].first);
		if (temp < 0)
		{
			temp = 0;
		}
		else
		{
			two = temp;
		}
	}
	ans += temp;
	ans += v1[v1.size() - 1].second;
	cout << ans;
}