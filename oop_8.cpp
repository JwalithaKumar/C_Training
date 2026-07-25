#include<iostream>
using namespace std;
class Calculator
{
public:

    int add(int a,int b)
    {
        return a+b;
    }

    int add(int a,int b,int c)
    {
        return a+b+c;
    }

    float add(float a,float b)
    {
        return a+b;
    }
};

int main()
{
    Calculator c;
    cout<<c.add(5,10)<<endl;
    cout<<c.add(5,10,15)<<endl;
    cout<<c.add(5.5f,2.5f);

}