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
	int a, b;
	cin >> a;
	for (int i = a; i <= 100; i++)
	{
		if (i >= 90)
		{
			cout << "A" << " ";
		}
		else if (i >= 80)
		{
			cout << "B" << " ";

		}
		else if (i >= 70)
		{
			cout << "C" << " ";

		}
		else if (i >= 60)
		{
			cout << "D" << " ";

		}
		else
		{
			cout << "F" << " ";
			
		}
	}

}