#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string arr[6] = { "John", "Tom", "Paul", "Vacancy"};
	int a;
	cin >> a;
	a = min(a, 4);
	cout << arr[a - 1];
}