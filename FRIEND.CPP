#include<iostream.h>
#include<conio.h>
class Distance
{
    private:
    int meters;
    public:
    friend void add_distance(Distance d1,Distance d2);
    void getdata()
    {
        cout<<"Enter Distance in meters:";
        cin>>meters;
        
    }
};
void add_distance(Distance d1,Distance d2)
{
    int add,km,m;
    add=d1.meters+d2.meters;
    km=add/1000;
    m=add%1000;
    cout<<"Addition is :"<<km<<" km "<<m<<" m" <<endl;
    
}
int main()
{
    Distance d1,d2;
    clrscr();
    d1.getdata();
    d2.getdata();
    add_distance(d1,d2);
    getch();
    return 0;
}    
