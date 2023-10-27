	#include<iostream.h>
	#include<conio.h>
	class birthday
	{
		int day;
		char month[15];
		int year;

		public:
			void getdata()
			{
			cout<<"Enter day ,month and year"<<endl;
			cin>>day>>month>>year;
			}
			void showdata()
			{
			cout<<"Birthdate="<<day<<" "<<month<<" "<<year<<endl;
			}
		};
		int main()
		{
		birthday b,*p[5];
		p[5]=&b;
		clrscr();
		for(int i=1;i<=5;i++)
		{
		p[i]->getdata();
		}
		for(i=1;i<=5;i++)
		{
		p[i]->showdata();
		}
		getch();
		return 0;
		}
