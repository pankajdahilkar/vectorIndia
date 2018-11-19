#include<iostream>
#include<list>
using namespace std;

void display(list<int>l1)
{
	list<int> :: iterator p;
	for(p=l1.begin();p !=l1.end();p++)
		cout<<*p<<"\t";
	cout<<endl;
}

main()
{
	list<int>l1;
	list<int>::iterator p;
	int x;

	l1.push_front(40);
	l1.push_front(20);
	l1.push_front(70);
	display(l1);
	l1.remove(100);
	display(l1);
	l1.push_back(10);
	l1.push_back(2);
	display(l1);

	list<int>l2;
	for(int i=0;i<3;i++)
	{
		cin>>x;
		l2.push_front(x);
	}

	l2.sort();
	l1.sort();
	display(l1);
	display(l2);
	l2.merge(l1);
	display(l2);

}
