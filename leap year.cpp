//leap Year code
#include<iostream.h>
#include<conio.h>
int main()
{
    int year;
    clrscr();
    cout<<" Enter year : "<<endl;
    cin>>year;
    if(year%400==0)
    {
        cout<<year<<" is Leap year"<<endl;
    }
    else if(year%100==0)
    {
        cout<<year<<" is not Leap year"<<endl;
    }
    else if(year%4==0)
    {
        cout<<year<<" is Leap year"<<endl;
    }
    else
    {
        cout<<year<<" is not Leap year"<<endl;
    }
    return 0;
}