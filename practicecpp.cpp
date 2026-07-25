#include <iostream>
using namespace std;
class Measure
{
    public:
    void display()
    {
        cout<<"Original"<<endl;
    }
};
class New : public Measure
{
    public:
    void display()
    {
        cout<<"Overide"<<endl;
    }
};
int main()
{
    Measure m;
    m.display();
    New n;
    n.display();
}