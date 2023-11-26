#include<iostream>
#include<cstring>
using namespace std;
class student
{
    int rollno;
    char name[50];
    char dname[50];
    public:
        student(int rn,const char n[50],const char d[50]="CO")
        {
            rollno=rn;
            strcpy(name,n);
            strcpy(dname,d);

        }
        void display()
        {
            cout<<"Roll no= "<<rollno<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Department = "<<dname<<endl;
        }
};
int main()
{
    student s1(1258,"yash","CO");
    student s2(1238,"Vedika");
    student s3(1236,"ATHARV","IT");
    s1.display();
    s2.display();
    s3.display();
    return 0;
}