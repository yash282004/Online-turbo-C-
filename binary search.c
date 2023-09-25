// binary search
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,j,mid,top,bottom,key,temp;
    clrscr();
    printf("Enter array size");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key");
    scanf("%d",&key);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    top=n-1;
    bottom=0;
    mid=(top+bottom)/2;
    while(key!=a[mid]&&bottom<=top)
    {
        if(a[mid]<key)
        {
            bottom=mid+1;
        }
        else
        {
            top=mid-1;
        }
        mid=(top+bottom)/2;
    }
    if(bottom<=top)
    {
       printf(" element is found");
    }
    else
    {
        printf("element not found");
    }
    getch();
    return 0;
}