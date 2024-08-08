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
	int a, b;
	cin >> a >> b;
	arr[0] = a;
	arr[1] = b;
	cout << a << " " << b << " ";
	for (int i = 2; i < 10; i++)
	{
		cout << (arr[i - 1] + arr[i - 2]) % 10 << " ";
		arr[i] = (arr[i - 1] + arr[i - 2]);
	}
}