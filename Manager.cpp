#include "Manager.h"

#include<iostream>
using namespace std;
#include<string>

Manager::Manager()
{
    department_name = "HR";
    team_number = 0;
    salary = 96000;
}

Manager::Manager(string name, int age, int ID, string dep_name, int team_num):Staff(name, age, ID)
{

    salary = 96000;
    this->department_name = dep_name;
    this->team_number = team_num;

}

Manager::~Manager()
{

}

string Manager::getName(){

return name;
}


int Manager::getAge(){
return age;
}

int Manager::getID(){
return ID;
}


string Manager::getDepName(){
return department_name;
}

int Manager::getTeamNum(){
    return team_number;

}

void Manager::display()
{
    cout << "Manager name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "ID: " << ID << endl;
    cout << "Annual Salary: " << salary << endl;
    cout << "Department Name: " << department_name << endl;
    cout << "# of teams managed " << team_number << endl;
}

