#include <iostream>
using namespace std;
int main() {
int a[]= {1,2,3,4,5};
int mul[]={};

for(int i=0;i<5;++i)
{
    for(int j=0;j<5;++j)
{   
    mul[i]=mul[i]*a[i];
    if(j==i)
    continue;
    cout<<mul[i];
}
}
    return 0;
}