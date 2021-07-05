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
}