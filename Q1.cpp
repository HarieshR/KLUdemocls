// Write a program to swap the 2 numbers using logical operator.
// The given program compiles successfully but fails to return the desired result for some test cases due to logical errors. Your task is to fix the code so that it passes all the test cases. 
// Sample Input:
// 65
// 120
// Sample Output:
// 65 120
// 120 65

#include <stdio.h>
int main() 
{
    int i , k ;
    scanf ( "%d %d" , &i , &k);
    printf("%d %d\n", i, k);
    i = i ^ k;
    k = k ^ i;
    i = i ^ k;
    printf("%d %d", i, k);
    return 0;
}