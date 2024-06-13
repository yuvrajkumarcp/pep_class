#include <iostream>
using namespace std;

class Employee
{
public:
int id;
string name;
    // Default constructor
    Employee()
    {
        cout << "From constructor" << endl;
    }

// parameterized constructor
Employee(int empID)
{
    id = empID;
}
};
int main()
{
    Employee e1;

    Employee e2;


    return 0;
}