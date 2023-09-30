#include<iostream.h>
#include<conio.h>
class Area
{
    public:
    int area(int length,int breadth)
    {
        return length*breadth;
    }
};
class Perimeter
{
    public:
    int perimeter(int length,int breadth)
    {
        return 2*(length+breadth);
        
    }
};
class Rectangle:public Area,public Perimeter
{
    public:
    int length,breadth;
    void getdata()
    {
        cout<<"Enter length="<<endl;
        cin>>length;
        cout<<"Enter breadth="<<endl;
        cin>>breadth;
    }
    void display()
    {
        cout<<"Area of Rectangle :" <<area(length,breadth)<<endl;
        cout<<"Perimeter of Rectangle :"<<perimeter(length,breadth)<<endl;
    }
};
int main()
{
    Rectangle r1;
    r1.getdata();
    r1.display();
    getch();
    return 0;
}