// Check whether the below program print the below pattern
// Sample Input:
// 4
// Sample Output:
// 1111
// 222
// 33
// 4

#include<bits/stdc++.h>
using namespace std;
int main() { 
   int i , j , n , n1 = 1 ;    
  cin >> n; 
  n1 = n;
  for (i = 1 ; i <= n ; i++)    
  {        
      for (j = 1 ; j <= n1 ; j++)        
      {            
    	cout << i;  
          
      }    --n1;  
      cout << endl;   
   } 
 cout << endl; 
   return 0;
}