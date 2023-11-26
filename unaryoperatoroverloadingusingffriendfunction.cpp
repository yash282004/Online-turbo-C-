#include<iostream>
using namespace std;
class base
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter value for x and y:"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
    friend void operator -(base& m);
   
};
 void operator -(base& m)
    {
        m.x=-m.x;
        m.y=-m.y;
    }
int main()
{
    base b1;
    b1.getdata();
    b1.display();
    -b1;
    b1.display();
    return 0;
}