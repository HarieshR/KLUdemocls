#include<stdio.h>
int main()
{
int arr []={1,9,5,1,15,18,12,12,1,1};
int value=1; 
int i=0,count=0, size;
size=sizeof(arr)/sizeof(arr[0]);
printf("%d\n",size);
while(i<size)
{
if(arr[i] == value) 
count+= 1;
i++;
}
printf("%d\n",count);
}