#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swap(float *c,float *d)
{
    float temp;
    temp=*c;
    *c=*d;
    *d=temp;
}
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter two integer"<<endl;
    cin>>a>>b;
    cout<<"Before swap:"<<endl;
    cout<<"a="<<a<<"\tb="<<b<<endl;
    swap(&a,&b);
     cout<<"after swap:"<<endl;
    cout<<"a="<<a<<"\tb="<<b<<endl;
    cout<<"Enter two floating number:"<<endl;
    cin>>c>>d;
    cout<<"Before swap:"<<endl;
    cout<<"c="<<c<<"\td="<<d<<endl;
    swap(&c,&d);
    cout<<"after swap:"<<endl;
    cout<<"c="<<c<<"\td="<<d<<endl;
    return 0;
}