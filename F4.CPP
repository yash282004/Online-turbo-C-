#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
char ch;
ifstream fin;
ofstream fout;
clrscr();
fout.open("demo.txt",ios::app);
fin.open("f1.txt",ios::in);
while(!fin.eof())
{
fin.get(ch);
fout<<ch;
}
fin.close();
fout.close();
fin.open("demo.txt",ios::in);
while(!fin.eof())
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
return 0;
}
