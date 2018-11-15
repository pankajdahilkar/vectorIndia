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
		cout<<"Enter the id "<<endl;
		cin>>empid;
		cout<<"Enter the name:"<<endl;
		cin>>name;
		cout<<"Enter the sal:"<<endl;
		cin>>sal;
	}
	friend void print(Employee &);
};

void print(Employee &e)
{
	cout<<"empid:"<<e.empid<<endl;
	cout<<"name:"<<e.name<<endl;
	cout<<"sal:"<<e.sal<<endl;
}

main()
{
	Employee E1;
	print(E1);
}
