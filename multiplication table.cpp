#include<iostream.h>
#include<conio.h>
int main()
{
    int n,i;
    clrscr();
    cout<<"Enter No you want multiplication table";
    cin>>n;
    cout<<"\n  multiplication table : "<<endl;
    for(i=1;i<=10;i++)
    {
         cout<<n<<"\tX\t"<<i<<"\t=\t"<<n*i<<endl;
    }
   return 0;
}