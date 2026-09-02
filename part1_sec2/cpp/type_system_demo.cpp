// C++: static, strongly-typed
// Every variable's type is fixed at compile time; mismatched types
// are caught by the compiler before the program ever runs.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 25;
    cout << "age is an int: " << age << endl;

    // age = "twenty-five";   // <-- would NOT compile: cannot assign a
                              //     string literal to an int variable

    int score = 10;
    string bonus = "5";

    // int total = score + bonus;   // <-- would NOT compile: no operator+
                                     //     between int and std::string

    int total = score + stoi(bonus);   // explicit conversion required
    cout << "Correct way: " << total << endl;
    return 0;
}
