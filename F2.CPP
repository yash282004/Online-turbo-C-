#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
ofstream fout;
clrscr();
fout.open("f2.txt",ios::out);
fout<<"Welcome to poly"<<endl;
fout.close();
ifstream fin;
fin.open("f2.txt",ios::in);
char ch;
while(!fin.eof())
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
return 0;
}
