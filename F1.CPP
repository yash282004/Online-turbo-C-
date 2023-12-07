#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
ofstream fout;
char ch;
clrscr();
fout.open("f1.txt",ios::out);
fout<<"Yash_khandagale"<<endl;
fout.close();
ifstream fin;
fin.open("f1.txt",ios::in);
while(!fin.eof())
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
return 0;
}
