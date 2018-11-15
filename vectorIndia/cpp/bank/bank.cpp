#include<iostream>
using namespace std;

class Bank_Of_India
{
public:
	int accno;
	string name;
	float bal;
	void deposite(float amt)
	{
		bal +=amt;
	}

	int withdrawl(float amt)
	{
		if(bal >=amt+1000)
		{
			bal-=amt;
			return 1;
		}
		return 0;
	}

	void BalEnq()
	{
		cout<<"Balance available in your account is = "<<bal<<endl;

	}
//	public:
	void Menu()
	{
		int choice;
		float amt;
		setdata();
		while(1)
		{
			cout<<"1. Deposite 2.Withdrawl 3.Balance Enquiry 4.getdata 5.return"<<endl;
			cout<<"Enter your choice "<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1: cout<<"Enter The amount to be deposited"<<endl;
					cin>>amt;
					deposite(amt);
					break;
				case 2: cout<<"Enter amount to be withdrawl"<<endl;
					cin>>amt;
					if(withdrawl(amt))
						cout<<"Withdrawl Successfull\n";
					else 
						cout<<"insufficient funds"<<endl;
					break;
				case 3:BalEnq();
				       break;

				case 4:getdata();
				       break;
				case 5: return;
			}

		}
	}
	void setdata()
	{
		cout<<"Enter the account number :"<<endl;
		cin>>accno;
		cout<<"Enter the name :"<<endl;
		cin>>name;
		cout<<"Enter the balance :"<<endl;
		cin>>bal;
	}
	void getdata()
	{
		cout<<"Accno "<<accno<<endl;
		cout<<"name :"<<name<<endl;
		cout<<"bal "<<bal<<endl;

	}
};

main()
{
	Bank cust1;
	cust1.Menu();
	cout<<cust1.accno<<endl;
	//Bank cust2;
	//cust2.Menu();
}
