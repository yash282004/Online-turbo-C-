#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
        void getdata()
        {
            cout<<"Enter real part of number:"<<endl;
            cin>>real;
            cout<<"Emter imaginary part off number:"<<endl;
            cin>>img;
        }
        void display()
        {
            if(img<0)
            {
                cout<<real<<" "<<img<<" +i "<<endl;
            }
            else
            {
                cout<<real<<" +i "<<img<<endl;
            }
        }
        friend complex operator +(complex c1,complex c2);
};
complex operator +(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.display();
    return 0;
}