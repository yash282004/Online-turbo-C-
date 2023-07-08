/*

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
  
*/

#include<iostream.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    clrscr();
    cout<<"enter how many steps you want in pyramid ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       
        for(j=1;j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}