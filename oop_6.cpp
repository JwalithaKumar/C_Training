#include <iostream>
using namespace std;
class Employee
{
private:
    int salary;
public:
    void setsal(int s)
    {
        if (s > 0)
            salary = s;
        else
            cout << "Invalid Salary" << endl;
    }
    int getsal()
    {
        return salary;
    }
    friend void display(Employee);
};

void display(Employee e)
{
    cout << "Salary (using Friend Function): " << e.salary << endl;
}
int main()
{
    Employee e1;
    e1.setsal(90000);
    cout << "Salary (using Getter): " << e1.getsal() << endl;
    display(e1);
    return 0;
}