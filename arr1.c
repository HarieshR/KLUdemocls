#include<stdio.h>
int main()
{
int arr [8]={1,9,5,1,15,18,12,12,1,1};
int value=1; 
int i=0,count=0; 
while(i<8)
{
if(arr[i] == value) 
count+= 1;
i++;
}
printf("%d\n",count);
}