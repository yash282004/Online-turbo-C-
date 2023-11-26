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
            cout<<"Enter imaginary part of number:"<<endl;
            cin>>img;
        }
        void display()
        {
            if(img<0)
            {
                cout<<real<<" "<<img<<"+i"<<endl;
            }
            else
            {
                cout<<real<<" +i "<<img<<endl;
            }
        }
        complex operator +(complex m)
        {
            complex temp;
            temp.real=real+m.real;
            temp.img=img+m.img;
            return temp;
        }

};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.display();
    return 0;
}