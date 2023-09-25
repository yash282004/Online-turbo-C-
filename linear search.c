#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,key,flag=0;
    clrscr();
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("enter elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter key elements:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("element found at index %d",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Element not found ");
        
    }
    getch();
    return 0;
    
}