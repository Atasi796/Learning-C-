#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
     {
        fact=fact*i;
     }
    return fact;
}
int main()
{  int n;
    
    printf("enter n:");
    scanf("%d",&n);
    int r;
    printf("enter r:");
    scanf("%d",&r);
    int nfact=factorial(n);//n!
    int rfact=factorial(r);//r!
    int nrfact=factorial(n-r);//(n-r))!
    /*for(int i=2;i<=n;i++)
    { 
    nfact= nfact*i;
    }
    for(int i=2;i<=r;i++)
    {
        rfact=rfact*i;
    }
    for(int i=2;i<=n-r;i++)
    {
        nrfact=nrfact*i;
    }*/
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    //int a=factorial(7);
    //printf("%d",a);
    return 0;
}