#include <iostream>
using namespace std;

// define a class
class Sample {
    public:
        char sex;

        void displaysex() {
        cout << "sex = " << sex << endl;
    }
    // public elements
    public:
    int age;

    void displayAge() {
        cout << "Age = " << age << endl;
    }
};

int main() {

    // declare a class object
    Sample obj1,o2;

    cout << "Enter your age: ";

    // store input in age of the obj1 object
    cin >> obj1.age;

    // call class function
    obj1.displayAge();

    cout << endl<<"Enter your sex: "<<endl;

    // store input in age of the obj1 object
    cin >> o2.sex;

    // call class function
    o2.displaysex();

    return 0;
}