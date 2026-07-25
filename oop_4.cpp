#include <iostream>
#include <string>
using namespace std;
class Employee{
    //private:
    
   public:
   int salary;
    void display()
    {
        cout<<" Earns "<<salary<<endl;
    }
};
int main()
{
    Employee e1;
    e1.display();
    e1.salary = 900000;
    printf("%d", e1.salary);
}