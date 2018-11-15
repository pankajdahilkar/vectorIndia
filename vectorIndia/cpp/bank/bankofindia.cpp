Bank_Of_India :: Bank_Of_India()
{
	cout<<"Enter the accno :"<<endl;
	cin>>accno;
	cout<<"enter the name :"<<endl;
	cin>>name;
	cout<<"Enter the bal :"<<endl;
	cin>>bal;
}

Bank_Of_India ::~Bank_Of_India()
{
	cout<<"Bank destructor :"<<endl;
}



void Bank_Of_India ::menu(State_Bank_Of_India &sobj)
{
	int choice;
	float amt;
	while(1)
	{
		cout<<"1.Deposit 2.withdrawal 3.Balenq 4.Transfer 5. exit"<<endl;
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
			case 4: cout<<"Enter amount to be Transfered \n";
				cin>>amt;
				if(withdrawal(amt))
				{
					if(transfer(amt,sobj))

						cout<<"Transfer suceesfull"<<endl;
					else 
					{
						cout<<"Transaction failed amount returned to your account"<<endl;
						Deposit(amt);
					}
				}
				else cout<<"Insufficient Funds"<<endl;
				break;
			case 5: return;
		}
	}
}

void Bank_Of_India ::Deposit(float amt)
{
	bal+=amt;
}

int Bank_Of_India ::withdrawal(float amt)
{
	if(amt<=bal)
	{
		bal-=amt;
		return 1;
	}
	return 0;
}


void Bank_Of_India ::Balenq()
{
	cout<<"Balance available in ur acc:" <<bal<<endl;
}

int Bank_Of_India swd(const char *p)
{
	char psd[]="ABCD123";
	int=0;
	if(!strcmp (psd,p))
	{
		return 1;
	}
	return 0;
}
