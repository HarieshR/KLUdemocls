#include<iostream>
using namespace std;

int main()

{
    int* sweet;
    int hot[5] = {11,21,31,41,51};
    sweet = hot;
    for(int i=0; i<5; ++i)
    {
    // cout<<&hot[i]<<" is the address of: ";
    // cout<<hot[i]<<endl<<endl;
    cout<<sweet+i<<" is the address of: ";
    cout<<*(sweet+i)<<endl;
    }
}
