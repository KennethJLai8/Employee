#include "Engineer.h"

#include<iostream>
using namespace std;
#include<string>


Engineer::Engineer()
{
    salary = 80000;
    project = "C++ Project";

}

Engineer::Engineer(string name, int age, int ID, string project):Staff(name, age, ID)//parameter list passes values to base class constructor
{
    salary = 80000;
    this->project = project;

}

Engineer::~Engineer()
{

}

string Engineer::getName(){

return name;
}


int Engineer::getAge(){
return age;
}

int Engineer::getID(){
return ID;
}


string Engineer::getProject(){
return project;
}

void Engineer::display()
{
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "ID: " << ID << endl;
cout << "Annual Salary: " << salary << endl;
cout << "Project Name: " << project << endl;
}
