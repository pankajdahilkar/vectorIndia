#include<iostream>
using namespace std;
class Employee
{
int empid;
string name;
float sal;
public:
Employee()
{
cout<"Enter the id:"<<endl;
cin>>empid;
cout<<"Enter the name :"<<endl;
cin>>name;
cout<<"Enter the sal:"<<end;
cin>>sal;
}
friend void print(Employee &);
};
