#include<iostream.h>
#include<conio.h>
class base
{
int x;
public:
base (int a)
{
x=a;
cout<<"Constructor in base x="<<x<<endl;
}
};
class derived: public base
{
int y,z;
public: 
derived (int a,int b):base(a)
{
y=a;
z=b;
cout<<"Constructor in derived y,z="<<y<<" , "<<z; 
}
};
void main()
{
clrscr();
derived ob(2,3);
getch();
}