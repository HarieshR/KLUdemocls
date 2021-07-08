#include <iostream>
using namespace std;
// create a class
class Room {
   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    }
};
int main() {
    // create object of Room class
    Room r1;
    // assign values to data members
    r1.length = 42.5;
    r1.breadth = 30.8;
    r1.height = 19.2;
    // calculate and display the area and volume of the r
    cout << "Area of R =  " << r1.calculateArea() << endl;
    cout << "Volume of R =  " << r1.calculateVolume() << endl;

    return 0;
}