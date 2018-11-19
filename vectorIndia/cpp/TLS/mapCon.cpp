#include<iostream>
#include<map>
#include<string>
using namespace std;

void display(map<string,int>p)
{
	map<string,int>:: iterator it;
	for(it=p.begin();it !=p.end();it++)
		cout<<(*it).first<<" "<<(*it).second<<endl;
}

main()
{
	string name;
	int number;
	map<string,int> phone;
	cout<<"Enter three sets of name and mobile number "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Name :"<<endl;
		cin>>name;
		cout<<"Enter Mobile No. "<<endl;
		cin>>number;
		phone[name]=number;
	}
	phone["Pankaj"]=98765;
	phone.insert(pair<string,int>("PankajD",1234));
	display(phone);
	cout<<phone.size()<<endl;
	cout<<"Enter The Name whose to be find :"<<endl;
	cin>>name;
	cout<<phone[name]<<endl;
}
