#include<iostream.h>
#include<conio.h>
class swap
{
    int n1,n2;
    public:
    friend void swapvalue(swap s1);
    void getdata()
    {
	cout<<"Enter two numbers :";
	cin>>n1>>n2;
    }
};
void swapvalue(swap s1)
{
    int t;
    cout<<"before swap:"<<endl;
    cout<<"number 1="<<s1.n1<<"\tnumber 2="<<s1.n2<<endl;
    t=s1.n1;
    s1.n1=s1.n2;
    s1.n2=t;
    cout<<"after swap:"<<endl;
    cout<<"number 1="<<s1.n1<<"\tnumber 2="<<s1.n2<<endl;

}
int main()
{
    swap s1;
    clrscr();
    s1.getdata();
    swapvalue(s1);
    getch();
    return 0;
}
