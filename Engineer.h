#ifndef ENGINEER_H
#define ENGINEER_H
#include "Staff.h"

#include<string>
using namespace std;

class Engineer:public Staff
{
    public:
        Engineer();
        Engineer(string name, int age, int ID, string project);
        virtual ~Engineer();
        string getName();
        int getAge();
        int getID();
        string getProject();
        void display();

    protected:
    private:
        string project;

};

#endif // ENGINEER_H
