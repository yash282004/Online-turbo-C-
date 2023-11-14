#include<iostream.h>
#include<conio.h>
class teacher
{
    protected:
            char name[30];
            int emp_id;
    public:
            void getteacher()
            {
                cout<<"Enter Teacher Name:"<<endl;
                cin>>name;
                cout<<"Enter employee ID:"<<endl;
                cin>>emp_id;
            }
};
class student
{
    protected:
     char stud_name[30];
     int roll_no;
     public:
     void getdata()
     {
         cout<<"Enter student name:"<<endl;
         cin>>stud_name;
         cout<<"Enter roll number:"<<endl;
         cin>>roll_no;
     }
};
class info: public teacher,public student
{
    public:
            void showinfo()
    {
        cout<<"Teacher name="<<name<<endl;
        cout<<"Employee ID="<<emp_id<<endl;
        cout<<"Student name="<<stud_name<<endl;
        cout<<"Roll No="<<roll_no<<endl;
    }
};
int main()
{
    info i1;
    clrscr();
    i1.getteacher();
    i1.getdata();
    i1.showinfo();
    getch();
    return 0;
}
