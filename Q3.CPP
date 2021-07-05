// Find the syntax error in the below code:
// Sample Input:
// ABC

// Sample Output:
// ABC
// ABC

// ABC
// ABC
// ABC
// ABC

#include<stdio.h>
int main() 
{  
  int x;
  for(x=1; x<=7; x++)
  {
    if(x==3)
      printf("\n");
    else
      printf("ABC\n");
  } 
  return 0;  
}