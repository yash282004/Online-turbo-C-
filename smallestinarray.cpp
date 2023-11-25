#include<iostream.h>
#include<conio.h>
int main()
{
    int a[5],small,i;
    clrscr();
    cout<<"Enter array elements:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    small=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    cout<<"smallest element in array is:"<<small;
    getch();
    return 0;
}
    