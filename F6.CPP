#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
char ch;
int count=0;
ofstream fout;
fout.open("space.txt",ios::out);
fout<<"hi friends my name is yash santosh khandagale";
fout.close();
ifstream fin;
fin.open("space.txt",ios::in);
while(!fin.eof())
{
fin.get(ch);
if(ch==' ')
{
count++;
}
}
fin.close();
cout<<"no of space present is : "<<count<<endl;
getch();
return 0;
}
