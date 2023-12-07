#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
int count=0;
char temp[20];
ifstream fin;
clrscr();
fin.open("line.txt",ios::in);
while(!fin.eof())
{
fin.getline(temp,20);
count++;
}
fin.close();
cout<<count;
getch();
return 0;
}

