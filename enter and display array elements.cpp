//enter elemets in array and display it
#include<iostream.h>
#include<conio.h>
int main()
{
    int a[10],i;
    clrscr();
    cout<<"enter array elements :"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Array elements are : "<<endl;
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
