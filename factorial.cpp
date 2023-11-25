#include<iostream.h>
#include<conio.h>
int main()
{
    int i,n,fact=1;
    clrscr();
    cout<<"Enter number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of given number is : "<<fact<<endl;
    getch();
    return 0;
}