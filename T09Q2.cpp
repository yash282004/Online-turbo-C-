#include<iostream.h>
#include<conio.h>
class emp
{
    protected:
        int emp_id;
        char emp_name[20];
    public:
        void getemp()
        {
            cout<<"Enter employee ID:"<<endl;
            cin>>emp_id;
            cout<<"Enter employee Name:"<<endl;
            cin>>emp_name;
        }
};
class programmer: public emp
{
    private:
         char skill[20];
    public:
        void getskill()
        {
            cout<<"Enter programming language you are expert:"<<endl;
            cin>>skill;
        }
        void showprogrammer()
        {
            cout<<"Employee ID="<<emp_id<<endl;
            cout<<"Employee Name="<<emp_name<<endl;
            cout<<"skill="<<skill<<endl;
        }
};
class manager : public emp
{
    private:
         char dept_name[20];
    public:
        void getmanager()
        {
            cout<<"Enter Department Name:"<<endl;
            cin>>dept_name;
        }
        void showmanager()
        {
            cout<<"Employee ID="<<emp_id<<endl;
            cout<<"Employee Name="<<emp_name<<endl;
            cout<<"Department="<<dept_name<<endl;

        }
};
int main()
{
    programmer p1;
    manager m1;
    clrscr();
    p1.getemp();
    p1.getskill();
    p1.showprogrammer();
    m1.getemp();
    m1.getmanager();
    m1.showmanager();
    getch();
    return 0;
}