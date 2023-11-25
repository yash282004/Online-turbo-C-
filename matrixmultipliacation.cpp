#include<iostream.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    clrscr();
    cout<<"Enter elements in first matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter elements in second matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"multiplication matrix are:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}