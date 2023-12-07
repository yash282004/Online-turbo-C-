#include<iostream.h>
#include<conio.h>
int main()
{
    char str1[50],str2[100];
    char *p1,*p2;
    cout<<"Enter string 1:"<<endl;
    cin>>str1;
    cout<<"Enter string 2:"<<endl;
    cin>>str2;
    p1=&str1[0];
    p2=&str2[0];
    while(*p1!='\0')
    {
        p1++;
    }
    while(*p2!='\0')
    {
        *p1=*p2;
        p2++;
        p1++;
    }
    cout<<"string after concatination ="<<str1<<endl;
    return 0;
}
