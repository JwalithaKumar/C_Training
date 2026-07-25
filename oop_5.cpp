#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
int salary;
public:
void setsal(int s)
   {
    if (s>0)
    salary = s;
    else
    cout<<"Invalid"<<endl;
   }
   
int getsal()
    {
        return salary;
    }
};

int main()
{
    Employee e1;
    e1.setsal(90000);
    e1.setsal(-90000);
    cout<<"Balance "<< e1.getsal();
    
    
}