#include<iostream>
using namespace std;
int main()
{
    char str1[50],str2[50],str3[100];
    char *p1,*p2,*p3;
    cout<<"Enter string 1:"<<endl;
    cin>>str1;
    cout<<"Enter string 2:"<<endl;
    cin>>str2;
    p1=&str1[0];
    p2=&str2[0];
    p3=&str3[0];
    while(*p1!='\0')
    {
        *p3=*p1;
        p1++;
        p3++;
    }
    while(*p2!='\0')
    {
        *p3=*p2;
        p3++;
        p2++;
    }
    cout<<"string after concatination ="<<str3<<endl;
    return 0;
}