//ass2
#include<iostream>
using namespace std;
class Decimal
{
	int var1,var2;
	void setdata()
	{
		cout<<"Enter variable 1:"<<endl;
		cin>>var1;
		cout<<"Enter variable 2:"<<endl;
		cin>>var2;
		//cout<<"Enter variable 3:"<<endl;
		//cin>>var3;
		//cout<<"Enter variable 4:"<<endl;
		//cin>>>var4;
	}

	int mul(int var1,int var2)
	{
		return(var1*var2);
	}

	int div(int var1,int var2)
	{
		return (var1/var2);
	}

	int add(int var1,int var2)
	{
		return(var1+var2);
	}

	int sub(int var1,int var2)
	{
		return (var1-var2);
	}

	public:
	void menu()
	{
		int choice;
		setdata();
		while(1)
		{
			cout<<"Enter ur choice :1.multiplication 2.division 3.addition 4.subtraction 5.return:"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1:cout<<"multiplication of "<<var1<<" and "<<var2<<" is "<<mul(var1,var2)<<endl;
				       break;
				case 2:cout<<"division of "<<var1<<" and "<<var2<<" is "<<div(var1,var2)<<endl;
				       break;
				case 3:cout<<"addition of"<<var1<<" and "<<var2<<" is "<<add(var1,var2)<<endl;
				       break;
				case 4:cout<<"subtraction of "<<var1<<" and "<<var2<<" is "<<sub(var1,var2)<<endl;
				       break;
				case 5:return;
			}
		}
	}
};
main()
{
	Decimal v1;
	v1.menu();
}
