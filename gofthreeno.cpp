#include<iostream.h>
#include<conio.h>
int main()
{
    int a,b,c;
    clrscr();
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    if(a>b&&b>c)
    {
        cout<<"\n greatest no ="<<a;
    }
    else if(b>a&&b>c)
    {
        cout<<"\n greatest no ="<<b;
    }
    else
    {
        cout<<"\n greatest no ="<<c;
    }
    getch();
}

