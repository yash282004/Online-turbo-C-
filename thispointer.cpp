#include<iostream>
using namespace std;
class base
{
    int x;
    public:
    void getdata(int x)
    {
        this->x=x;  // here instead of this if we use normal method that is x=x then x=4201019 
    }               // but if we use this pointer then we get result x=10;
    void display()
    {
        cout<<"x="<<x<<endl;
    }
};
int main()
{
    base b1;
    b1.getdata(10);
    b1.display();
    return 0;
}