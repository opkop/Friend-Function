
#include<iostream>
using namespace std;

class complex
{
  private:
    int a,b;
  public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<" "<<b<<endl;
    }  
    friend void sum(complex);
};
void sum(complex c)
{
   cout<<"sum of a and b is"<<" "<<c.a+c.b<<endl;
}

int main()
{
    complex a1;
    a1.setdata(1,2);
    a1.showdata();
    sum(a1);

}