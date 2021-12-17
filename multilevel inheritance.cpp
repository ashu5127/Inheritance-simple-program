#include<iostream>
using namespace std;
class Operator
{
public:
    int a,b,c;

public:
    void display()
{

cout<<"Enter two no:"<<endl;
cin>>a>>b;
cout<<"operation perform:"<<endl;
}
};
class add:public Operator
{
public:
void sum()
{
c=a+b;
cout<<"Addition of two number:"<<c<<endl;
}
};
class sub:public add
{
public:
void sub1()
{
c=a-b;
cout<<"Sub of two no:"<<c<<endl;
}
};
int main()
{
sub s;
s.display();
s.sum();
s.sub1();
return 0;
}

