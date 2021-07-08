<<<<<<< HEAD
// Dora is very much interested in gardening and she decides to plant more trees in her garden. 
//She plants trees in the order of rows and columns. She numbered the trees in row-wise order. 
//She planted the mango trees only in the first row, first column, last column. 
//But later when the trees grew up, she forgot where she planted mango trees. 
//So, help her find out whether the given tree number is a number of mango trees or not. 
//Display whether “It is a mango tree” or “It is not a mango tree”.

// Input Format:
// Input consists of 3 Integers. First Input corresponds to row, second Input corresponds to the column, third input corresponds to Tree number.
// Output Format:
// The output consists of a String. If the given tree a number is a number of the mango tree, display “It is a mango tree” otherwise “It is not a mango tree”.
// Sample Input:
// 5
// 5
// 11

// Sample Output:
// It is a mango tree

#include <stdio.h>

int main()
{
    int r,c,n;
    scanf("%d",&r);
    scanf("%d",&c);
    scanf("%d",&n);
    if(n <= c || (n % c == 0) || ((n / c) * c) + 1 == n)
    printf("It is a mango tree");
    else
    printf("It is not a mango tree");
    printf("\n");
    return 0;
=======
// Dora is very much interested in gardening and she decides to plant more trees in her garden. 
//She plants trees in the order of rows and columns. She numbered the trees in row-wise order. 
//She planted the mango trees only in the first row, first column, last column. 
//But later when the trees grew up, she forgot where she planted mango trees. 
//So, help her find out whether the given tree number is a number of mango trees or not. 
//Display whether “It is a mango tree” or “It is not a mango tree”.

// Input Format:
// Input consists of 3 Integers. First Input corresponds to row, second Input corresponds to the column, third input corresponds to Tree number.
// Output Format:
// The output consists of a String. If the given tree a number is a number of the mango tree, display “It is a mango tree” otherwise “It is not a mango tree”.
// Sample Input:
// 5
// 5
// 11

// Sample Output:
// It is a mango tree

#include <stdio.h>

int main()
{
    int r,c,n;
    scanf("%d",&r);
    scanf("%d",&c);
    scanf("%d",&n);
    if(n <= c || (n % c == 0) || ((n / c) * c) + 1 == n)
    printf("It is a mango tree");
    else
    printf("It is not a mango tree");
    printf("\n");
    return 0;
>>>>>>> 27e63f0ba3344890e5744a0a2b13b6ae4c4656b3
}