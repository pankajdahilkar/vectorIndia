#include<iostream>
using namespace std;
class xyz
{
	int x;
	const int y;
	public:

	xyz():y(12)
	{
		cout<<"enter the x:"<<endl;
		cin>>x;
	}

	xyz(int a,int b):y(b)
	{
		x=a;
	}

	xyz(xyz &obj):y(obj.y)
	{
		x=obj.x;
	}

	void Display()
	{
		cout<<"x:"<<x<<endl;
		cout<<"y:"<<y<<endl;
	}

	void Inc()
	{
		++x;
	}
};

main()
{
	xyz obj1;
	obj1.Display();
	obj1.Inc();
	obj1.Display();
	xyz obj2(34,67);
	obj2.Display();
	xyz obj3=obj1;
	obj3.Display();
}
