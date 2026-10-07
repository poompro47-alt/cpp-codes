#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char a = 77, b = 79, c = 80;
    cout << c << b << b << a << "\n"; // Output expected: POOM
    return 0;
}
