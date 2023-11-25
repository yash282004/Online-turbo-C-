#include<iostream>
using namespace std;
class c1 
{
    int n;
    public:
    void getdata()
    {
        cout<<"Enter number:"<<endl;
        cin>>n;
    }
    void friend greatest(c1 ob1,c1 ob2);
};

void greatest(c1 ob1,c1 ob2)
{
    if(ob1.n>ob2.n)
    {
        cout<<"greatest is "<<ob1.n;
    }
    else
    {
        cout<<"greatest is "<<ob2.n;
    }
}
int main()
{
    c1 ob1;
    c1 ob2;
    ob1.getdata();
    ob2.getdata();
    greatest(ob1,ob2);
    return 0;
}