//to check for prime num
#include <stdio.h> 
int main() {
int n;
scanf("%d",&n);

for(int i=2;i<=(n/2); i++)
{
    if(n%i==0)
    {
    printf("It is not a prime num \n ");
    break;
    }
    else
    {
    printf(" It is a prime num \n");
    break;}
}

return 0;

}