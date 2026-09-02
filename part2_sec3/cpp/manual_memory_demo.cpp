// C++: the programmer is fully responsible for allocation (new) and
// deallocation (delete). Forgetting to delete leaks memory; using a
// pointer after it has been deleted produces a dangling pointer.

#include <iostream>
using namespace std;

int main() {
    // --- Correct manual management ---
    int* value = new int(42);           // heap allocation
    cout << "Allocated value: " << *value << endl;
    delete value;                       // manual deallocation
    value = nullptr;                    // avoid an accidental dangling pointer
    cout << "Freed and nulled the pointer." << endl;

    // --- Correct manual management for an array ---
    int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) arr[i] = i * i;
    cout << "Array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;                       // must use delete[] for arrays
    arr = nullptr;

    cout << "All heap memory manually released." << endl;
    return 0;
}
