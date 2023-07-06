#include<iostream.h>
#include<conio.h>
int main()
{
    int a=5;
    int *p=&a;      //& is  (address of) operator
                    // * is deference operatopr
    cout<<"address of a is :"<<&a<<endl;
    cout<<"address of a is :"<<p<<endl;
    cout<<"value of a is :"<<a<<endl;
    cout<<"value of p is :"<<p<<endl;
    cout<<"address of p is :"<<&p<<endl;
    
    return 0;
}