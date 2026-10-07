#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << "a is greater than b (a > b)\n";
    } else if (a < b) {
        cout << "a is less than b (a < b)\n";
    } else {
        cout << "a is equal to b (a == b)\n";
    }
    return 0;
}
