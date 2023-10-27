	#include<iostream.h>
	#include<conio.h>
	class box
	{
		int height;
		int width;
		int breadth;


		public:
			void getdata()
			{
				cout<<"Enter height:"<<endl;
				cin>>height;
				cout<<"Enter width:"<<endl;
				cin>>width;
				cout<<"Enter breadth:"<<endl;
				cin>>breadth;
			}
			void showdata()
			{
				cout<<"Area="<<2*height*width+2*width*breadth+2*breadth*height<<endl;
				cout<<"Volume="<<height*width*breadth<<endl;
			}
		};
		int main()
		{
		box b1,*p;
		p=&b1;
		clrscr();
		b1->getdata();
		b1->showdata();
		getch();
		return 0;
		}