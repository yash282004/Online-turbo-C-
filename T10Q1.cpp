#include<iostream.h>
#include<conio.h>
class value
{
    int a,b;
    public:
            void getdata()
            {
                cout<<"Enter value for a:"<<endl;
                cin>>a;
                cout<<"Enter value for b:"<<endl;
                cin>>b;
            }
            void showdata()
            {
                cout<<"a= "<<a<<endl;
                cout<<"b= "<<b<<endl;
                
            }
            void operator -()
            {
                a=-a;
                b=-b;
            }
                
};
    int main()
    {
        value v1;
        clrscr();
        v1.getdata();
        cout<<"Before Unary operator:"<<endl;
        v1.showdata();
        cout<<"after unary operator:"<<endl;
        -v1;
        v1.showdata();
        getch();
        return 0;
    }