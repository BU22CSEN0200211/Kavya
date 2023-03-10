#include<stdio.h>
int main()
{
    int a[10],i,n,k,j;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("enter the %d elements:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        k=a[i];
        j=i-1;
        while(k>a[j]&&j>0)
        {
            a[j+1]=a[i];
            j=j-1;
        }
        a[i+j]=k;
        printf("sorted array:");
        for(i=0;i<n;i++)
        {
        printf("\t%d",a[i]);
        }
        return 0;
    }
