#include<iostream.h>
#include<conio.h>
int factorial(int n);
int main()
{
    int n,fact;
    clrscr();
    cout<<" Enter a number youy want factorial of";
    cin>>n;
    fact=factorial(n);
    cout<<"factorial is "<<fact;
    return 0;
}
factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}