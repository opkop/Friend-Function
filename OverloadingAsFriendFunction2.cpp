//Unary Operator Overloading in Friend Function 

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
    friend complex operator-(complex);
};
complex operator-(complex c)
{
   complex temp;
     temp.a=-c.a;
     temp.b=-c.b;
     return(temp);

}

int main()
{
    complex a1,a2;
    a1.setdata(1,2);
    a1.showdata();
    a2=-a1;            //a2=operator-(a1);
    a2.showdata();

}