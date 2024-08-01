#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int ans, sum, cnt;
int a, b, n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string arr[5] = { "John", "Tom", "Paul", "Sam" };
	while (true)
	{
		cin >> n;
		if (n >= 5)
		{
			cout << "Vacancy\n";
			break;
		}
		cout << arr[n - 1] << "\n";
	}
}