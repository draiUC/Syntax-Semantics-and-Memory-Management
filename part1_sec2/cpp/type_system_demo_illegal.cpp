#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 25;
    age = "twenty-five";        // ILLEGAL: string -> int

    int score = 10;
    string bonus = "5";
    int total = score + bonus;  // ILLEGAL: int + std::string has no operator+

    cout << total << endl;
    return 0;
}
