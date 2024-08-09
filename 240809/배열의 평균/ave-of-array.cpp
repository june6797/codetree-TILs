#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

using namespace std;

int arr[1001][1001];
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	double s = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
			s += arr[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		double sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += arr[i][j];
		}
		cout << fixed << setprecision(1) << sum / 4 << " ";
	}
	cout << "\n";

	for (int i = 0; i < 4; i++)
	{
		double sum = 0;
		for (int j = 0; j < 2; j++)
		{
			sum += arr[j][i];
		}
		cout << fixed << setprecision(1) << sum / 2 << " ";
	}
	cout << "\n";
	cout << s / 8;
}