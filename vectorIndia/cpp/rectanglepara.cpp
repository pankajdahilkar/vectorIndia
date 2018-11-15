//with default constructor

#include<iostream>
using namespace std;

class Rectangle
{
	float area,peri,len,bre;

	public:
	void cal_area()
	{
		area=len*bre;
	}

	void cal_peri()
	{
		peri=2*(len+bre);
	}

	void set_Data()
	{
		cout<<"Enter the len:"<<endl;
		cin>>len;
		cout<<"Enter the bre:"<<endl;
		cin>>bre;
	}

	void Getdata()
	{
		cout<<"len:"<<len<<endl;
		cout<<"bre:"<<bre<<endl;
		cout<<"area:"<<area<<endl;
		cout<<"peri:"<<peri<<endl;
	}


	Rectangle()
	{
		cout<<"In default cons :"<<endl;
		cout<<"Enter the len :"<<endl;
		cin>>len;
		cout<<"Enter the bre :"<<endl;
		cin>>bre;
	}

	Rectangle(float l,float b)
	{
		cout<<"Parameterised constructor :"<<endl;
		len=l;
		bre=b;
	}

	Rectangle(Rectangle &obj)//copy constructor
	{
		cout<<"in copy cons :"<<endl;
		len=obj.len;
		bre=obj.bre;
		area=obj.area;
		peri=obj.peri;
	}

};
main()
{
	cout<<"object 1:"<<endl;
	Rectangle robj;
	cout<<sizeof(robj)<<endl;
	robj.cal_area();
	robj.cal_peri();
	robj.Getdata();
	float l,b;
	cout<<"object 2:"<<endl;
	cout<<"Enter the len and bre:"<<endl;
	cin>>l>>b;
	Rectangle robj1(l,b);
	robj1.cal_area();
	robj1.cal_peri();
	robj1.Getdata();
	Rectangle robj2=robj;
	robj2.Getdata();

}
