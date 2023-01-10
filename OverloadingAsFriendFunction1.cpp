//Binary Operator Overloading in Friend Function 

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
    friend complex operator+(complex c,complex d);
};
complex operator+(complex c,complex d)
{
   complex temp;
   temp.a=c.a+d.a;
   temp.b=c.b+d.b;
   return(temp);
}

int main()
{
    complex a1,a2,a3;
    a1.setdata(1,2);
    a1.showdata();
    a2.setdata(1,2);
    a1.showdata();
    a3=a1+a2;              //a3=operator+(a1,a2);
    a3.showdata();

}