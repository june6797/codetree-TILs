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
	char a;
	cin >> a;
	if (a == 'S')
	{
		cout << "Superior";
	}
	else if (a == 'A') {
		cout << "Excellent";
	}
	else if (a == 'B')
	{
		cout << "Good";
	}
	else if (a == 'C')
	{
		cout << "Usually";
	}
	else if (a == 'D')
	{
		cout << "Effort";
	}
	else
	{
		cout << "Failure";
	}
}