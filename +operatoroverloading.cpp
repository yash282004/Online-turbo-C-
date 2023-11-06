#include<iostream>
#include<string.h>
using namespace std;

class base
{
    private:
    char a[20];
    char b[20];
    public:
            void getdata()
            {
                cout<<"Enter string 1:"<<endl;
                cin>>a;
                cout<<"Enter string 2:"<<endl;
                cin>>b;
            }
            void showdata()
            {
                cout<<"string 1:"<<a<<endl;
                cout<<"string 2:"<<b<<endl;
            }
            void operator +()
            {
                cout<<"after concatation :"<<strcat(a,b);
            }
};
    int main()
    {
        base b1;
        b1.getdata();
        b1.showdata();
        +b1;
        return 0;
    }
    