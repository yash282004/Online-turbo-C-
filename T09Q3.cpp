#include<iostream.h>
#include<conio.h>
class car_manufacturer
{
    private:
            char name[10];
    public:
            void getdata()
            {
                cout<<"Enter Manufacturer Name:"<<endl;
                cin>>name;
            }
            void showdata()
            {
                cout<<"Manufaturer Name= "<<name<<endl;
            }
};
class car_model : public car_manufacturer 
{
    private:
            int model_no;
            char model_name[20];
    public:
            void accept()
            {
                cout<<"Enter Model Name :"<<endl;
                cin>>model_name;
                cout<<"Enter Model No:"<<endl;
                cin>>model_no;
            }
            void display()
            {
                cout<<"Model Name="<<model_name<<endl;
                cout<<"Model NO="<<model_no<<endl;
            }
};
class car : public car_model
{
    private:
            int car_no;
            char color[15];
    public:
            void getcar()
            {
                cout<<"Enter car number:"<<endl;
                cin>>car_no;
                cout<<"Enter car color:"<<endl;
                cin>>color;
            }
            void showcar()
            {
                cout<<"Car NO="<<car_no<<endl;
                cout<<"Car Color="<<color<<endl;
            }
};
int main()
{
    car c1;
    clrscr();
    c1.getdata();
    c1.accept();
    c1.getcar();
    c1.showdata();
    c1.display();
    c1.showcar();
    getch();
    return 0;
}
