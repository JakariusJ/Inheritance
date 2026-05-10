#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string employeename;
    double salary;
};

class Manager : public Employee
{
    double bonus;
};

int main()
{
    Manager managerobj;
    double total;

    getline(cin, managerobj.employeename);
    cin >> managerobj.salary;
    cin >> managerobj.bonus;

    total = managerobj.salary + managerobj.bonus;

    cout << "Manager Name: " << managerobj.employeename << endl;
    cout << "Salary: " << managerobj.salary << endl;
    cout << "Bonus: " << managerobj.bonus << endl;
    cout << "Total Income: " << total << endl;
    return 0;
}