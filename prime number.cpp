//Checking Weather given number is prime or not
#include<iostream.h>
#include<conio.h>
int main()
{
    int n,i;
    clrscr();
    cout<<"enter a number";
    cin>>n;
    if(n==0||n==1)
    {
        cout<<"Not prime"<<endl;
        goto end;
    }
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
                cout<<"not prime"<<endl;
                goto end;
        }
           
    }
    cout<<"prime number";
    end:
    return 0;
}