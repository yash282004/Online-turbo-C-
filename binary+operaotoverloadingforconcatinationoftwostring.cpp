#include<iostream.h>
#include<conio.h>
#include<string.h>
class sample
{
    char str[50];
    public:
        void getdata()
        {
            cout<<"Enter string:"<<endl;
            cin>>str;
        }
        void display()
        {
            cout<<"String =  "<<str;
        }
        friend void operator +(sample s1,sample s2);
};
void operator +(sample s1,sample s2)
{
    strcat(s1.str,s2.str);
    cout<<"String after concatination= "<<s1.str<<endl;
}
int main()
{
    sample s1,s2;
    clrscr();
    s1.getdata();
    s2.getdata();
    s1+s2;
    getch();
    return 0;
}