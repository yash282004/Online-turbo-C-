#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char str1[50],*p1;
    cout<<"Enter string:"<<endl;
    cin>>str1;
    p1=&str1[0];
    while(*p1!='\0')
    {
        p1++;
        count++;
    }
    p1--;
    cout<<"Reverse string is:"<<endl;
    while(count>0)
    {
        cout<<*p1;
        p1--;
        count--;
    }
    return 0;
}