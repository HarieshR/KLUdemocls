//remove dup
#include <stdio.h> 
int main(void)
{
int a[]={2,3,2,2,2,6,6,7};
int i,j,k=0;
int count=0, len=8;

for(i=0;i<len;i++)
{
    for(j=i+1;j<len; j++)
    {
        if(a[i]==a[i])
        {
            for (k=j; k<len; k++)
            {
                a[k]=a[k+1];
                len=len-1;
                count=count+1;
            }
            j--;
        }
    }
}
for(i=0;i<8-count; i++) 
printf("%d",a[i]);

return 0;
}