#include<iostream.h>
#include<conio.h>
struct student
{
    char name[50];
    int rollno;
    float per;
};
int main()
{
    struct student s[5];
    int i;
    clrscr();
    cout<<"Enter information of 5 student:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"enter name :"<<endl;
        cin>>s[i].name;
        cout<<"Enter roll no:"<<endl;
        cin>>s[i].rollno;
        cout<<"Enter percentage :"<<endl;
        cin>>s[i].per;
        
    }
    cout<<"student information :"<<endl;
    cout<<"name\troll no\tpercentage"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<s[i].name<<"\t"<<s[i].rollno<<"\t"<<s[i].per<<endl;
    }
    getch();
    return 0;
}