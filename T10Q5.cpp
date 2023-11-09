#include<iostream.h>
#include<conio.h>
class complex
{
    int img;
    int real;
    public:
        void getdata()
        {
            cout<<"Enter real part of number:"<<endl;
            cin>>real;
            cout<<"Enter imaginary part of number:"<<endl;
            cin>>img;
            
        }
        void showdata()
        {
            cout<<real<<" + "<<img<<"i"<<endl;endl;
        }
        complex operator +(complex m)
        {
            complex temp;
            temp.real=m.real+real;
            temp.img=m.img+img;
            return temp;
        }
};
    
    int main()
    {
        complex c1,c2,c3;
        clrscr();
        c1.getdata();
        c2.getdata();
        c3=c1+c2;
        c3.showdata();
        getch();
        return 0;
    }
