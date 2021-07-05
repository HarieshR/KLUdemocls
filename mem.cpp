#include <iostream>
using namespace std;
int main() {
    // declare an int pointer
    int* pointInt;
    // declare a float pointer
    float* pointFloat;
   // dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;
    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45;
    cout << *pointInt << endl;
    cout << *pointFloat << endl;
    // deallocate the memory
    delete pointInt, pointFloat;
    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    return 0;
}