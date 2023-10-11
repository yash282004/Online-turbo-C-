#include <iostream.h>
#include<conio.h>
class great2;
class great1
{
    int a;
    public:
    friend void greatest(great1 g1,great2 g2);
    void accept()
    {
        cout<<"Enter first number:";
        cin>>a;
    }
    
};
class great2
{
    int b;
    public:
    friend void greatest(great1 g1,great2 g2);
    void getdata()
    {
        cout<<"Enter second number:";
        cin>>b;
    }
    
};
void greatest(great1 g1,great2 g2)
{
    if(g1.a>g2.b)
    {
        cout<<g1.a<<"is greatest number"<<endl;
    }
    else
    {
        cout<<g2.b<<"is greatest number"<<endl;
    }
}

int main()
{
    great1 g1;
    great2 g2;
    clrscr();
    g1.accept();
    g2.getdata();
    greatest(g1,g2);
    
    getch();
    
    return 0;
}
