#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
int arr1[1001];
vector<int> v;
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());
	cout << v[n - 1] << " " << v[n - 2];
}