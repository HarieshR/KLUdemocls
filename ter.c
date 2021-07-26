#include<stdio.h>
int main()
{
int result, min, max, mid;
int numA=5, numB=2, numC=7; 
 max = (numA>numB) ? ((numA>numC) ? numA: numC): ((numB>numC) ? numB:numC);
 min = (numA<numB) ? ((numA<numC) ? numA: numC): ((numB<numC) ? numB:numC);
mid= (numA+numB+numC)-(min+max);
result = (max*mid); 
printf("%d",result);
}

// (exp)? A:B;