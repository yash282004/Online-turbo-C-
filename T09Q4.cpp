#include<iostream.h>
#include<conio.h>
class emp
{
    private:
            int emp_id;
            char name[20];
    public:
            void getdata()
            {
                cout<<"Enter employee id:"<<endl;
                cin>>emp_id;
                cout<<"Enter employee name:"<<endl;
                cin>>name;
            }
            void showdata()
            {
                cout<<"Employee ID="<<emp_id<<endl;
                cout<<"Employee Name="<<name<<endl;
            }
};
class empinfo : public emp  
{
    private:
            float basic_salary;
    public:
            void getinfo()
            {
                cout<<"Enter basic_salary:"<<endl;
                cin>>basic_salary;
            }
            void showinfo()
            {
                cout<<"Basic Salary="<<basic_salary<<endl;
            }
};
int main()
{
    empinfo e1;
    clrscr();
    e1.getdata();
    e1.getinfo();
    e1.showdata();
    e1.showinfo();
    getch();
    return 0;
}
