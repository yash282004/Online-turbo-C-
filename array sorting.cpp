#include<iostream.h>
#include<conio.h>
int main()
{
    int a[100],n,i,j,t;
    clrscr();
    cout<<"Enter how many elements you want in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])         //  for sorting array in decreaing order use    if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<" Your sorted array are :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}