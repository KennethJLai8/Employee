#ifndef MANAGER_H
#define MANAGER_H
#include "Staff.h"

#include<string>
using namespace std;

class Manager:public Staff
{
    public:
        Manager();
        Manager(string name, int age, int ID, string dep_name, int team_num);
        virtual ~Manager();
        string getName();
        int getAge();
        int getID();
        string getDepName();
        int getTeamNum();
        void display();
    protected:
    private:
        string department_name;
        int team_number;
};

#endif // MANAGER_H
