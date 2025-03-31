//c program to right rotate array by d positions
//using temporary array
#include<stdio.h>
void RightRotate(int arr[],int n,int d)
{
    int temp[n];
    for(int i=0;i<d;i++)
    {
       temp[i]=arr[n-d+i];

    }
    for(int i=0;i<n-d;i++)
    {
     temp[i+d]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
      arr[i]=temp[i];
    }
}
int main()
{
   int arr[]={5,6,7,8,2,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   int d=2;
   RightRotate(arr,n,d);
   printf("array after right rotation by 2 positions\n");
   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   return 0;
}
//output=2,3,5,6,7,8