State_Bank_Of_India ::State_ Bank_Of_India()
{
	cout<<"Enter the accno :"<<endl;
	cin>>accno;
	cout<<"enter the name :"<<endl;
	cin>>name;
	cout<<"Enter the bal :"<endl;
	cin>>bal;
}

State_Bank_Of_India ::~State_Bank_Of_India()
{
	cout<<"Bank destructor :"<<endl;
}

int State_Bank_Of_india :: transfer(int amt,State_Bank_Of_India sobj)
{
Deposit(amt);
return 1;
}
void State_Bank_Of_India ::menu()
{
	int choice;
	float amt;
	while(1)
	{
		cout<<"1.Deposit 2.withdrawal 3.Balenq "<<endl;
		cout<"Enter the choice :"<<end;
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter the amt to be deposited "<<endl;
			       cin>>amt;
			       Deposit(amt);
			       break;
			case 2:cout"Enter the amt to be withdrawal "<<endl;
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

void State_Bank_Of_India ::Deposit(float amt)
{
	bal+=amt;
}

int State_Bank_Of_India ::withdrawal(float amt)
{
	if(amt<=bal)
	{
		bal-=amt;
		return 1;
	}
	return 0;
}


void State_Bank_Of_India ::Balenq()
{
	cout<<"Balance available in ur acc:" <<bal<<endl;
}

int State_Bank_Of_India ::verifypswd(const char *p)
{
	char psd[]="ABCD123";
	int=0;
	if(!strcmp (psd,p))
	{
		return 1;
	}
	return 0;
}
