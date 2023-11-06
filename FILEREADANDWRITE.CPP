#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{
ifstream fin;
ofstream fout;
fout.open("yash.txt",ios::out);
fout<<"YASH_SANTOSH_KHANDAGLE";
char ch;
fout.close();
clrscr();
fin.open("yash.txt",ios::in);

while(!fin.eof())
{
fin.get(ch);
cout<<ch;
}
fin.close();
//fout<<"\n Yash Santosh Khandagale.";
//cout<<"\n file opened successfully";

getch();
return 0;
}