#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001];
double ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		arr[n]++;
	}
	for (int i = 1; i <= 6; i++)
	{
		cout << i << " - " << arr[i] << "\n";
	}
}