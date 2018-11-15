Shopping ::Shopping()
{
	cout<<"Enter the no of items :"<<endl;
	cin>>cnt;
//	tot_amt=0;
ptr=new float[cnt];
	tot_amt=0;
	//ptr=new float[cnt];
	cout<<"Enter the prices :"<<endl;
	for(int i=0;i<cnt;i++)
	{
		cin>>ptr[i];
		tot_amt+=ptr[i];
	}
}

Shopping ::~Shopping()
{
	delete[]ptr;
	ptr=NULL;
}

void Shopping ::Display()
{
	cout<<"prices of item are :"<<endl;
	for(int i=0;i<cnt;i++)
		cout<<i<<"."<<ptr[i]<<endl;
	cout<<"tot_amt :"<<tot_amt<<endl;
}

void Shopping ::menu(Bank &obj)
{
	int choice;
	while(1)
	{
		cout<<"1.Display 2.paythebill 3.return tomain "<<endl;
		cout<<"Enter ur choice "<<endl;
		cin>>choice;
		getchar();
		switch(choice)
		{
			case 1:Display();
			       break;
			case 2:paythebill(obj);
			       break;
			case 3:return;
		}
	}
}

void Shopping ::paythebill(Bank &obj)
{
	int i=0;
	char str[20];
	cout<<"Enter the password :"<<endl;
	system("stty -echo ");
	system("stty -icanon ");
	do 
	{
		str[i]=getchar();
		i++;
		cout<<"*";
	}while((str[i-1]!=' ')&&(str[i-1]!='\n'));
	str[i-1]='\0';
	system("stty echo");
	system("stty icanon");
	if(obj.verifypswd(str))
	{
		if(obj.withdrawal(tot_amt))
		{
			cout<<"transaction successfull "<<endl;
		}
		else
		{
			cout<<"transaction failed"<<endl;
		}
	}
	else
		cout<<"Incorrect password :"<<endl;
}

