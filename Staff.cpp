#include "Staff.h"
#include<iostream>
#include<string>
using namespace std;


Staff::Staff()
{
    name = " ";
    age = 0;
    ID = 0;
    salary = 50,000;
}

Staff::Staff(string name, int age, int ID){
    this->name = name;
    this->age = age;
    this->ID = ID;
    salary = 50,000;


}

Staff::~Staff()
{


}

string Staff::getName(){
return name;
}

int Staff::getAge(){
return age;
}

int Staff::getID(){
return ID;
}

int Staff::getSalary(){
return salary;
}

void Staff::display(){
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "ID: " << ID << endl;
cout << "Salary: " << salary << endl;
}
