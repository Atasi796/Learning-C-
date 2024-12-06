#include<stdio.h>
int main()
{
     int n,i,sumodd=0,sumeven=0;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter numbers:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    for(i=0;i<=n-1;i++)
    { 
        if(arr[i]%2==0)
        { 
          sumeven=sumeven+arr[i];
        }
        else
        {
            sumodd=sumodd+arr[i];
        }
    }
    printf("sum even is:%d\n",sumeven);
    printf("sum odd is:%d\n",sumodd);
    printf("The difference is:%d",sumodd-sumeven);
    return 0;
}