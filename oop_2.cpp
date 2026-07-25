#include <iostream>
#include <string>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    Employee(string n, int s){
        name = n;
        salary = s;
    }
    void display()
    {
        cout<<"name is"<<" "<<name;
        cout<<" Earns "<<salary;
    }
};
int main()
{
    Employee e1("karthik", 45000);
    e1.display();
}