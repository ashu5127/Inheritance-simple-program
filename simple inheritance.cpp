#include<iostream>
using namespace std;
class animal
{
public:
void eat()
{
cout<<"I can eat:";
}
void sleep()
{
cout<<"I acn sleep:";
}
};
class dog: public animal
{
    public:
void get()
{
cout<<"hiii";
}
};
int main()
{
    dog A;
A.eat();
A.sleep();
A.get();
return 0;
}

