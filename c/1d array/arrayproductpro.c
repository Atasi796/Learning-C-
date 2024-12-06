#include<stdio.h>
int main()
{
    int n,product=1,i;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d numbers:\n",n);
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&arr[i]);
    product=product*arr[i];
    }
    printf("the product is :%d",product);
    return 0;
}

