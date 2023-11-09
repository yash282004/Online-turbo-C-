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
        clrscr();
        c1.getdata();
        c2.getdata();
        c3=c1+c2;
        c3.showdata();
        getch();
        return 0;
    }
