#include <iostream>
#include <string>
using namespace std;
class Book
{
    public:
    string n;
    int p;
    Book (string name, int price){
        n = name;
        p = price;
    }

    void display()
    {
        cout<<"The Title is "<<n<<endl;
        cout<<"The cost is "<<p<<endl;

    }
    ~Book(){
        cout<<"Destructor called!"<<endl;
    }
};

int main()
{
    Book b("As good as dead", 450);
    b.display();
    cout<<"End main"<<endl;
    return 0;   
}