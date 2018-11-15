Bank :: Bank()
{
	cout<<"Enter the accno :"<<endl;
	cin>>accno;
	cout<<"Enter the name :"<<endl;
	cin>>name;
	cout<<"Enter the bal :"<<endl;
	cin>>bal;
}

Bank ::~Bank()
{
	cout<<"Bank destructor :"<<endl;
}

void Bank::menu()
{
	int choice;
	float amt;
	while(1)
	{
		cout<<"1.Deposit 2.withdrawal 3.Balenq "<<endl;
		cout<<"Enter the choice :"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter the amt to be deposited "<<endl;
			       cin>>amt;
			       Deposit(amt);
			       break;

			case 2:cout<<"Enter the amt to be withdrawal "<<endl;
			       cin>>amt;
			       if(withdrawal(amt))
				       cout<<"withdrawal successful :"<<endl;
			       else
				       cout<<"withdrawal failed :"<<endl;
			       break;

			case 3:Balenq();
			       break;
		}
	}
}

void Bank ::Deposit(float amt)
{
	bal+=amt;
}

int Bank ::withdrawal(float amt)
{
	if(amt<=bal)
	{
		bal-=amt;
		return 1;
	}
	return 0;
}

void Bank ::Balenq()
{
	cout<<"Balance available in ur acc :"<<bal<<endl;
}

int Bank ::verifypswd(const char *p)
{
	char psd[]="ABCD123";
	int i=0;
	if(!strcmp(psd,p))
	{
		return 1;
	}
else
	return 0;
}

