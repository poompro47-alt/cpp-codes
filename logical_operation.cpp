#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool a = true, b = false;
    // and (&&)
    // or (||)
    // not (!) or just use not
    cout << "and (&&): " << (a && b) << "\n";
    cout << "or (||): " << (a || b) << "\n";
    cout << "not (!a): " << (!a) << "\n";
    cout << "not (not a): " << (not a) << "\n";
}
