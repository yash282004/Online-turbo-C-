#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
char ch;
int count=0;
ifstream fin;
clrscr();
fin.open("dic.txt",ios::in);
while(!fin.eof())
{
fin.get(ch);
if(ch=='r')
{
count++;
}
}
fin.close();
cout<<count;
getch();
return 0;
}
