/*        1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1


 */








#include<iostream.h>
#include<conio.h>
int main()
{
    int i,j,k;
    clrscr();
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    getch();
    return 0;
}
