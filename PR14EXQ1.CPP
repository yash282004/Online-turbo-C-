	#include<iostream.h>
	#include<conio.h>
	class book
	{
	char book_name[50];
	char author_name[30];
	int price;

	public:
		void getdata()
		{
			cout<<"Enter Book Name:"<<endl;
			cin>>book_name;
			cout<<"Enter author name:"<<endl;
			cin>>author_name;
			cout<<"Enter price:"<<endl;
			cin>>price;
		}
		void showdata()
		{
			cout<<"Book Name="<<book_name<<endl;
			cout<<"Author Name="<<author_name<<endl;
			cout<<"Price="<<price<<endl;
		}
	};
	int main()
	{
		book b1;
		book *p;
                 p=&b1;
		clrscr();
		p->getdata();
		p->showdata();
		getch();
		return 0;
	}