#include <iostream>
#include <string>
using namespace std;
class Student
{
    public:
    string name;
    int age;

    void display()
    {
        cout<<name<<" "<<age;
    }
};
int main()
{
    Student s1;
    s1.age = 24;
    s1.name = "Rekha";
    s1.display();
    return 0;
}