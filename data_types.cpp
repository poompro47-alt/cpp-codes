#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string name;
    string nickname = "Jake";
    char grade = 'A';

    short small_number = 100;
    int age = 18;
    long population = 1000000L;
    long long big_number = 9000000000LL;

    // Non-negative whole numbers: zero or positive, no decimals
    unsigned int score = 100;
    unsigned long long large_score = 9000000000ULL;

    // Decimal numbers
    float temperature = 36.5f;
    double price = 19.99;
    long double precise_number = 3.141592653589793L;

    bool is_student = true;

    cout << "name: \"" << name << "\"\n";
    cout << "nickname: " << nickname << "\n";
    cout << "grade: " << grade << "\n";
    cout << "small_number: " << small_number << "\n";
    cout << "age: " << age << "\n";
    cout << "population: " << population << "\n";
    cout << "big number: " << big_number << "\n";
    cout << "score: " << score << "\n";
    cout << "large score: " << large_score << "\n";
    cout << "temperature: " << temperature << "\n";
    cout << "price: " << price << "\n";
    cout << "precise_number: " << precise_number << "\n";
    cout << boolalpha; // Display true/false instead of 1/0
    cout << "is_student: " << is_student << "\n";

    return 0;
}
