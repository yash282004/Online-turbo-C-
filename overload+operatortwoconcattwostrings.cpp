//Write a program for  + operator overloading for concatinjation of two strings
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
                cout<<"string = "<<str<<endl;
            }
            sample operator +(sample m)
            {
                sample temp;
                strcat(str,m.str);
                strcat(temp.str,str);
                return temp;
            }
};
int main()
{
    sample s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    s3.display();
    getch();
    return 0;
}
