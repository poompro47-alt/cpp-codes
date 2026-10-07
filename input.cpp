#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string name, last_name;
    long long age;

    cout << "Name: " << flush;
    cin >> name;

    cout << "Last Name: " << flush;
    cin >> last_name;

    cout << "Age: " << flush;
    cin >> age;

    cout << "Hello, " << name << " " << last_name << "\n";
    cout << "You are " << age << " years old.\n";

    return 0;
}
