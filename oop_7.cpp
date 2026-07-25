#include<iostream>
using namespace std;

class Person
{
public:

    string name;
    int age;

    void displayPerson()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class Student : public Person
{
public:

    int roll;

    void displayStudent()
    {
        cout<<"Roll : "<<roll<<endl;
    }
};

int main()
{
    Student s;

    s.name="Rahul";
    s.age=20;
    s.roll=101;

    s.displayPerson();
    s.displayStudent();
}