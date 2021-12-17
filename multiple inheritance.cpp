#include<iostream>
using namespace std;
class Operator
{
public:
       int a;

public:
       void display()
{
              cout<<"Enter value for a:"<<endl;
              cin>>a;
}
};
class add
{
    public:
           int b;
        void sum()
        {
            cout<<"Enter value of b"<<endl;
            cin>>b;
        }
};
class addition:public Operator,public add
{
public:
     int c;
     void add1()
     {
     c=a+b;
     cout<<"Addition of a and b:"<<c<<endl;
     }

};
int main()
{
addition a;
a.display();
a.sum();
a.add1();
return 0;
}



