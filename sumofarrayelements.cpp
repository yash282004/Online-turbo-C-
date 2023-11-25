#include<iostream.h>
#include<conio.h>
int main()
{
    int a[100],n,i,sum=0;
    clrscr();
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter array element:"<<endl;
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum= "<<sum;
    getch();
    return 0;
}
    