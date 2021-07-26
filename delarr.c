#include<stdio.h>
int main()
{
int inputList[9]={1, 2, 3, 4, 5, 6, 7, 8, 9};
int size=9, indexValue=3, i, j;
if(indexValue<size)
{
for (i= indexValue; i<size-1;i++)
{
inputList[i] =inputList[i+1];
//inputList[3] =inputList[4];
} 
for(i=0; i<size-1; i++) 
printf("%d ",inputList[i]);
}
else 
{
    for(i=0; i<size; i++) 
    printf("%d ",inputList[i]);
}
}