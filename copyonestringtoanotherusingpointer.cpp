// copy content of one string to another using pointer
#include<iostream>
using namespace std;
int main()
{
    int i;
    char str1[50],str2[50],*p1,*p2;
    cout<<"Enter string 1:"<<endl;
    cin>>str1;
    p1=&str1[0];
    p2=&str2[0];
    i=0;
    while(*p1!='\0')
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    cout<<"Content of string 2 ="<<str2<<endl;
    return 0;

}