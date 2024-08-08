#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[101][101];
int cnt;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	for (int i = 2; i <= 9; i+=2)
	{
		for (int j = b; j >= a; j--)
		{
			if (i % 2 == 0)
			{
				cout << j << " * " << i << " = " << i * j;
				if (j != a)
				{
					cout << " / ";
				}
			}
		}
		cout << "\n";
	}

}