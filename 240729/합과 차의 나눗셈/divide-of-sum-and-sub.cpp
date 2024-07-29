#include <bits/stdc++.h>
#define mod 1000000007
#define INF 987654321
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;

int main() {
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << (a + b) / (a - b);
    return 0;
}