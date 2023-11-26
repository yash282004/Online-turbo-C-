#include<iostream>
using namespace std;
int main()
{
    int i,count;
    char str[50],*p;
    cout<<"Enter string :"<<endl;
    cin>>str;
    p=&str[0];
    count=0;
    i=0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    cout<<"Length of string is = "<<count<<endl;
    return 0;
}