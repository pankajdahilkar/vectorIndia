#include<iostream>
using namespace std;

class Rectangle
{
	float area,peri,len,bre;

	public:
	void cal_area()
	{
		area =len*bre;
		cout<<"area:"<<area<<endl;
	}

	void cal_peri()
	{
		peri=2*(len+bre);
		cout<<"peri:"<<peri<<endl;
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
};


main()
{
	Rectangle robj;
	//cout<<sizeof(robj)<<endl;
	robj.set_Data();
	robj.cal_area();
	robj.cal_peri();
	robj.Getdata();
}

