<<<<<<< HEAD
#include<iostream>
using namespace std;

// function that takes value as parameter
void func1(int numVal) {
    cout<<numVal<<endl;
}
// function that takes reference as parameter
// notice the & before the parameter
void func2(int &numRef) {
    cout<<numRef<<endl;
    cout<<&numRef<<endl;
}
int main() {
    int num = 5;
    cout<<&num<<endl;
    // pass by value
    func1(num);
    // pass by reference
    func2(num);
    return 0;
=======
#include<iostream>
using namespace std;

// function that takes value as parameter
void func1(int numVal) {
    cout<<numVal<<endl;
}
// function that takes reference as parameter
// notice the & before the parameter
void func2(int &numRef) {
    cout<<numRef<<endl;
    cout<<&numRef<<endl;
}
int main() {
    int num = 5;
    cout<<&num<<endl;
    // pass by value
    func1(num);
    // pass by reference
    func2(num);
    return 0;
>>>>>>> 27e63f0ba3344890e5744a0a2b13b6ae4c4656b3
}