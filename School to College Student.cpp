#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
};

class Student : public Person
{
public:
    int rollnum;
};

class GradStudent : public Student
{
public:
    string degree;
};

int main()
{
    GradStudent gradstudentobj;

    getline(cin, gradstudentobj.name);
    cin >> gradstudentobj.rollnum;
    cin.ignore();
    getline(cin, gradstudentobj.degree);

    cout << "Name: " << gradstudentobj.rollnum << endl;
    cout << "Roll Number: " << gradstudentobj.rollnum << endl;
    cout << "Degree: " << gradstudentobj.degree << endl;

    return 0;
}