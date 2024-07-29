#include <iostream>
using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double a, b;
    cin >> a >> b;
    cout << a+b << " " << a/2 + b/2;
    return 0;
}