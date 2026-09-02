// C++: two classic manual-memory bugs.
#include <iostream>
using namespace std;

void memoryLeak() {
    int* leaked = new int[1000];   // allocated...
    leaked[0] = 1;
    // ...never delete[]'d: the block is unreachable once leaked goes
    // out of scope, but the memory is never returned to the OS.
}

int* danglingPointer() {
    int* ptr = new int(99);
    delete ptr;          // memory freed
    return ptr;           // BUG: returns a pointer to freed memory
}

int main() {
    memoryLeak();

    int* dangling = danglingPointer();
    cout << "Dangling read (undefined behavior): " << *dangling << endl;

    return 0;
}
