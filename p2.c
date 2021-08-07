//sum of digits
#include <stdio.h> 
int main() {
int n, sum=0,r; 
scanf("%d",&n); //5115 
while(n>0)
{
r=n%10;     //5
sum=sum+r;  //12
n=n/10;     //0
}
printf("%d",sum);
return 0;

}