#include <iostream.h>
#include<conio.h>
class student
{
    int rollno;
    char name[20];
    public:
    void accept()
    {
        cout<<"Enter roll no:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
    }
    void display()
    {
        cout<<"Roll no= "<<rollno<<endl;
        cout<<"Name= "<<name<<endl;
    }
};
class marks:public student
{
    int m1,m2,m3,total;
    float per;
    public:
    void getdata()
    {
        cout<<"Enter marks for m1:";
        cin>>m1;
        cout<<"Enter marks for m2:";
        cin>>m2;
        cout<<"Enter marks for m3:";
        cin>>m3;
    }
    void showdata()
    {
        cout<<"m1= "<<m1<<endl;
        cout<<"m2= "<<m2<<endl;
        cout<<"m3= "<<m3<<endl;
    }
    void calculate()
    {
        total=m1+m2+m3;
        cout<<"Total= "<<total<<endl;
        per=total/3.0;
        cout<<"Percentage= "<<per<<endl;
    }
};

int main()
{
    marks m1;
    clrscr();
    m1.accept();
    m1.getdata();
    m1.display();
    m1.showdata();
    m1.calculate();
    
    getch();
    return 0;
}
