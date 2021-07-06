#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Tuesday;
    cout << "Day of the week is " << today+1;
    return 0;
}