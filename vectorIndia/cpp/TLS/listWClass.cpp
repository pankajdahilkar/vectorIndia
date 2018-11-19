#include<iostream>
#include<list>
using namespace std;
class Employee
{
	int emp;
	char name[20];
	float sal;
	public:
	void getdata()
	{
		cout<<"Enter the emp id"<<endl;
		cin>>emp;
		cout<<"Enter the name"<<endl;
		cin>>name;
		cout<<"Enter the salary"<<endl;
		cin>>sal;
	}
	void Edisplay()
	{
		cout<<"Emp id = "<<emp<<endl;
		cout<<"Emp name = "<<name<<endl;
		cout<<"Emp sal = "<<sal<<endl;
	}
	friend void operator >>(istream &,Employee &);
	friend void operator <<(ostream &, Employee &);

};

void  operator >>(istream &in,Employee &e)

{

	cout<<"Enter the emp id"<<endl;
	cin>>e.emp;
	cout<<"Enter the name"<<endl;
	cin>>e.name;
	cout<<"Enter the salary"<<endl;
	cin>>e.sal;
}

void operator <<(ostream &out, Employee &e )
{
	cout<<"Emp id = "<<e.emp<<endl;
	cout<<"Emp name = "<<e.name<<endl;
	cout<<"Emp sal = "<<e.sal<<endl;
}

void display(list<Employee>&v)
{
	list<Employee>::iterator it;
	for(it =v.begin();it!=v.end();it++)
	{
		cout<<*it;
	}
}
	main()
	{


		list<Employee>v1;
		Employee obj;
		for(int i=0;i<5;i++)
		{
			cin>>obj;
			v1.push_back(obj);
		}
		display(v1);
		v1.reverse();
		cout<<"Reverse list "<<endl;
			display(v1);


	}
