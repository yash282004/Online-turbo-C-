#include<iostream.h>
#include<conio.h>
class base
{
    int n1,n2;
    public:
            void getdata()
            {
                cout<<"Enter number 1 and number 2 :"<<endl;
                cin>>n1>>n2;
            }
            void operator ++()
            {
                n1++;
                n2++;
                cout<<"after ++ operator"<<endl;
                cout<<"number 1="<<n1<<endl;
                cout<<"number 2="<<n2<<endl;

            }
             void operator --()
            {
                n1--;
                n2--;
                cout<<"after -- operator"<<endl;
                cout<<"number 1="<<n1<<endl;
                cout<<"number 2="<<n2<<endl;

            }
};

    int main()
    {
       base b1;
       clrscr();
       b1.getdata();
       ++b1;
       --b1;
       getch();
       return 0;
    }
