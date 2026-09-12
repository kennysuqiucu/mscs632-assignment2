#include <iostream>
using namespace std;

int* allocateMemory(int size) {
    int* array = new int[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = i * i;
    }

    return array;
}

int main() {
    /* Uncomment this block to see the leak
    int* leaked = allocateMemory(1000); // Allocate memory but do not dispose it
    cout << "leaked[5] = " << leaked[5] << endl; // I never call on delete to dispose of this afterward (See Figure 7)
    */

    // Disposing of the memory properly that which was previously allocated, comment this out if you want to test the block above
    int* fixed = allocateMemory(1000); // Allocate memory
    cout << "fixed[5] = " << fixed[5] << endl;
    delete[] fixed; // Here, I do call on delete to dispose of the allocated memory (See Figure 8)
    
    return 0;
}