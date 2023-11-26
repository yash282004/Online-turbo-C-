#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main()
{
    int a,b;
    cout<<"Enter number 1 and numbe 2"<<endl;
    cin>>a>>b;
    cout<<"Values before swap are:"<<endl;
    cout<<"Number 1="<<a<<"\t number 2="<<b<<endl;
    swap(&a,&b);
    cout<<"Values after swap are:"<<endl;
    cout<<"Number 1="<<a<<"\t number 2="<<b<<endl;
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}