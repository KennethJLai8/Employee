#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <string>
using namespace std;

class Staff
{
    public:
        Staff();
        Staff(string name, int age, int ID);
        virtual ~Staff();
        string getName();
        int getAge();
        int getID();
        int getSalary();
       virtual void display();
    protected:
        string name;
        int age;
        int ID;
        int salary;
    private:
};

#endif // STAFF_H
