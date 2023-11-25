#include<iostream>
using namespace std;
class book
{
    int bookno;
    static int count;
    public:
    void getdata()
    {
        count++;
    }
    void display()
    {
        cout<<"Count = "<<count<<endl;
    }
};
int book::count;
int main()
{
    book b1,b2,b3;
    b1.display();
    b2.display();
    b3.display();
    b1.getdata();
    b1.display();
    b2.getdata();
    b2.display();
    b3.getdata();
    b3.display();
    return 0;
}