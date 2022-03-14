#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id , char pName[]) {
  studentId=id;

  strcpy(name , pName);
}

// Display StudentId and Name
void Student::display() {
  cout << "student ID is : "<<studentId<<endl;
  cout << "Name is : "<<name<<endl;
}
