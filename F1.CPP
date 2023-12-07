#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
ofstream fout;
clrscr();
fout.open("f1.txt",ios::in);
fout<<"Yash_khandagale"<<endl;
fout<<"bye"<<endl;
fout.close();
ifstream fin;
char string[50];
fin.open("f1.txt",ios::out);
fin>>string;
cout<<string<<endl;
fin>>string;
cout<<string;
fin.close();
getch();
return 0;
}