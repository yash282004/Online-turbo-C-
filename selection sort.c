#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,t,n;
    int a[100];
    clrscr();
    printf("Enter size of array :\n");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array elements are :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("elements after selection sort:");
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
    return 0;
}