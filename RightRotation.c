//c program to right rotate array by d positions
//by rotating one element at a time
#include<stdio.h>
void RightRotation(int arr[],int n,int d)
{
     for(int i=0;i<d;i++)
     {
        int last=arr[n-1];
        for(int j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
     }
}
int main()
{
   int n,d;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the array elements\n");
     for(int i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);

     }
     printf("Enter the position of array rotation\n");
     scanf("%d",&d);
     RightRotation(arr,n,d);
     printf("Array elements after right rotation by %d position ",d);
     for(int i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
     return 0;

}
//if input arr[]={1,2,3,4,5,6} then after rotating right by 2 places 
//then array become  5,6,1,2,3,4
