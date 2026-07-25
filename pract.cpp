#include <iostream>
#include <string>
using namespace std;
class ADD
{
    public:
    int add (int a, int b) // new fn
    {  return a+b;}
    int add (int a, int b, int c) // fn overloaded
    { return a+b+c;}
    float add (float a, float b) //fn overloaded
    { return a+b;}
   
};

int main()
{
 ADD a;
 cout<<"The sum of two integers "<<a.add(5,6)<<endl;
 cout<<"The sum of three integrs "<<a.add(50,70,90)<<endl;
 cout<<"The sum two decimals "<<a.add(8.9f, 2.3f)<<endl;
}