#include<iostream>
using namespace std;

#include"person.cpp"
#include"student.cpp"
#include"employee.cpp"
main()
{
Person *ptr = NULL;
ptr = new Student;
ptr->Display();
delete  ptr;
ptr = new Employee;
ptr->Display();

}
