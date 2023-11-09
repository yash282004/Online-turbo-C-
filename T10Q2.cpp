#include<iostream.h>
#include<conio.h>
#include<string.h>
class sample2;
class sample1
{
    char str1[30];
    public:
            void getdata()
            {
                cout<<"Enter string 1 :"<<endl;
                cin>>str1;
            }
            friend void operator +(sample1 s1,sample2 s2);
            
                
};
class sample2
{
    char str2[30];
    public:
            void getdata()
            {
                cout<<"Enter string 2 :"<<endl;
                cin>>str2;
            }
            friend void operator +(sample1 s1,sample2 s2);
            
                
};
void operator +(sample1 s1,sample2 s2)
{
    
    strcat(s1.str1,s2.str2);
    cout<<s1.str1;
}
    int main()
    {
       sample1 s1;
       sample2 s2;
       clrscr();
       s1.getdata();
       s2.getdata();
       s1+s2;
       getch();
       return 0;
    }