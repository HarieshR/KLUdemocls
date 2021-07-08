<<<<<<< HEAD
#include<iostream>
using namespace std;
// function prototype with pointer as parameters
void swap(int*, int*);
int main()
{
    int a = 1, b = 2;
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // call function by passing variable addresses
    swap(&a,&b);
    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
// function definition to swap numbers
void swap(int *n1, int *n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    
=======
#include<iostream>
using namespace std;
// function prototype with pointer as parameters
void swap(int*, int*);
int main()
{
    int a = 1, b = 2;
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // call function by passing variable addresses
    swap(&a,&b);
    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
// function definition to swap numbers
void swap(int *n1, int *n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    
>>>>>>> 27e63f0ba3344890e5744a0a2b13b6ae4c4656b3
}