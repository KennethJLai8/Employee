#include<iostream>
#include <string>
#include "Engineer.h"
#include "Staff.h"
#include "Manager.h"

using namespace std;

void staffDisplay(Staff* s);


int main(){
    //local variables
string sname, ename, mname, project_name, dep_name;
int s_age, e_age, m_age;
int s_ID, e_ID, m_ID;
int team_num;

cout << "Name of staff employee: " << endl;
cin >> sname;
cin >> sname;

cout << "Age: " << endl;
cin >> s_age;

cout << "ID: " << endl;
cin >> s_ID;
cin.ignore();

cout << "Name of engineer: " << endl;
getline(cin, ename);

cout << "Age: " << endl;
cin >> e_age;

cout << "ID: " << endl;
cin >> e_ID;

cout << "Project Name: " << endl;
cin >> project_name;
cin.ignore();

cout << "Name of manager: " << endl;
getline(cin, mname);

cout << "Age: " << endl;
cin >> m_age;

cout << "ID: " << endl;
cin >> m_ID;

cout << "Department Name: " << endl;
cin >> dep_name;

cout << "Number of Teams: " << endl;
cin >> team_num;

//Creation of objects and passing user input to appropriate constructors
Staff* staff = new Staff(sname, s_age, s_ID);
Engineer* engineer = new Engineer(ename, e_age, e_ID, project_name);
Manager* manager = new Manager(mname, m_age, m_ID, dep_name, team_num);


Staff* arr[3];//array of staff object pointers

//array assignment
*arr = staff;
*(arr+1) = engineer;
*(arr+2) = manager;

//call friend functions
staffDisplay(arr[0]);
staffDisplay(arr[1]);
staffDisplay(arr[2]);

//delete pointers
delete staff;
delete engineer;
delete manager;

staff = nullptr;
engineer = nullptr;
manager = nullptr;

}

void staffDisplay(Staff* s)
{
    s->display();
    cout << endl;
}
