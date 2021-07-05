// Write a program to print the sum of perfect square elements in an given array.
// Input Format:
// First input consists of an integer which represents the size of an array.
// Remaining inputs are the elements of an array.
// Output Format:
// Output consists of a string “Sum of perfect square element is ” and integer which denotes the sum of perfect square elements in an array.
// Sample Input:
// 5
// 25
// 5
// 3
// 4
// 8
// Sample Output:
// Sum of perfect square element is 29

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i,n,b,sum=0,*a;
    cin>>n;   
    a = (int*)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        b = sqrt(*(a+i));
        if(b*b == *(a+i))
        sum += *(a+i);
    } 
    cout<<"Sum of perfect square element is "<<sum;
    return 0;
}