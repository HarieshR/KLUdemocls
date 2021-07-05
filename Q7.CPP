#include <iostream>
using namespace std;

int main()
{
    int n,i,flag=0;
    cin >> n;
    
    for(i=1;i<=n;i++)
    {
        if(n % i == 0)
            flag++;
    }
    
    if(flag <= 2)
        cout << "Yes";
    else
        cout << "No";
    
    
    return 0;
}