#include<iostream>
using namespace std;
class base
{
    int n;
    public:
    void getdata()
    {
        cout<<"Enter number:"<<endl;
        cin>>n;
    }
    friend void cal(base b1,base b2);
};
void cal(base b1,base b2)
{
  if(b1.n<b2.n)
  {
    cout<<b1.n<<" is smallest number "<<endl;
  }
  else
  {
    cout<<b2.n <<" is smallest number "<<endl;
  }
}
int main()
{
    base b1,b2;
    b1.getdata();
    b2.getdata();
    cal(b1,b2);
    return 0;
}