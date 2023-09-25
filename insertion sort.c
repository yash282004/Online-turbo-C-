// Insertion sort
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,temp,k,n;
    int a[100];
    clrscr();
    printf("Enter array size :");
    scanf("%d",&n);
    printf("\nEnter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Entered array elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        k=i-1;
        while((k>=0)&&(a[k]>temp))
        {
            a[k+1]=a[k];
            k--;
        }
        a[k+1]=temp;
    }
    printf("\n Entered array elements after Insertion sort are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
    return 0;
    
    
}